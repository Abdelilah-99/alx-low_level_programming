#include "main.h"
/**
 * print_error - Print an error message to stderr and exit.
 * @msg: The error message to be printed.
 *
 * This function prints the given error message to stderr and exits the program
 * with a status code of 98.
 */
void print_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * print_elf_header - Print the information contained in the ELF header.
 * @h: Pointer to the ELF header structure.
 *
 * This function takes a pointer to the ELF header structure and prints the
 * information contained in the ELF header according to the specified format.
 */
void print_elf_header(const Elf64_Ehdr *h)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", h->e_ident[i]);
	printf("\nClass: %d-bit\n", h->e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", h->e_ident[5] == 1 ? "little-endian" : "big-endian");
	printf("Version: %d\n", h->e_ident[6]);
	printf("OS/ABI: %d\n", h->e_ident[7]);
	printf("ABI Version: %hhx\n", h->e_ident[8]);
	printf("Type: 0x%x\n", h->e_type);
	printf("Entry point address: 0x%llx\n", h->e_entry);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * This function is the entry point of the program. It opens the specified ELF
 * file, reads the ELF header, and prints the information contained in the ELF
 * header.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	const char *filename;
	Elf64_Ehdr h;

	if (argc != 2)
	{
		print_error("Invalid number of arguments");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open file");
	}
	if (read(fd, &h, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Failed to read ELF h");
	}

	if (h.e_ident[0] != 0x7f || h.e_ident[1] != 'E' ||
		h.e_ident[2] != 'L' || h.e_ident[3] != 'F')
	{
		print_error("Not an ELF file");
	}

	print_elf_header(&h);

	close(fd);
	return (0);
}
