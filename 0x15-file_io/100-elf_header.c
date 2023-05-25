#include <elf.h>
#include "main.h"
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))
/**
* verify - check if is ELF
* @e_idt: ELF struct
*/

void verify(unsigned char *e_idt)
{
	if (*(e_idt) == 0x7f && *(e_idt + 1) == 'E' &&
	    *(e_idt + 2) == 'L' && *(e_idt + 3) == 'F')
		printf("ELF Header:\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
* magic - print magic number
* @e_idt: the ELF struct
*/

void magic(unsigned char *e_idt)
{
	int i;
	int border;

	border = EI_NIDENT - 1;
	printf("  Magic:   ");
	for (i = 0; i < border; i++)
		printf("%02x ", *(e_idt + i));
	printf("%02x\n", *(e_idt + i));
}

/**
* class - print the class
* @e_idt: ELF struct
*/

void class(unsigned char *e_idt)
{
	printf("  Class:                             ");
	if (e_idt[EI_CLASS] == ELFCLASSNONE)
		printf("This class is invalid\n");
	else if (e_idt[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_idt[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_idt[EI_CLASS]);
}

/**
* data - print mthe type of data
* @e_idt: ELF struct
*/

void data(unsigned char *e_idt)
{
	printf("  Data:                              ");
	if (e_idt[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (e_idt[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_idt[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_idt[EI_DATA]);
}

/**
* version - print the version of the file
* @e_ident: the ELF struct
*/

void version(unsigned char *e_idt)
{
	printf("  Version:                           ");
	if (e_idt[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_idt[EI_VERSION]);
}

/**
 * osabi - print the osabi
 * @e_idt: the ELF struct
 */
void osabi(unsigned char *e_idt)
{
	printf("  OS/ABI:                            ");
	if (e_idt[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_idt[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
* type - print the type
* @e_ident: the ELF struct
* @e_idt: data to compare and print.
*/

void type(unsigned int e_type, unsigned char *e_idt)
{
	e_idt[EI_DATA] == ELFDATA2MSB ? e_type = e_type >> 8 : e_type;

	printf("  Type:                              ");
	if (e_type == ET_NONE)
		printf("NONE (Unknown type)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
* entry - print the entry point
* @e_idt: the ELF struct
* @e_entry: the data to print
*/

void entry(unsigned int e_entry, unsigned char *e_idt)
{
	if (e_idt[EI_DATA] == ELFDATA2MSB)
		e_entry = REV(e_entry);

	printf("  Entry pnt adrss:               ");
	printf("%#x\n", (unsigned int)e_entry);
}

/**
* main - read a ELF file.
* @argc: the number of args
* @argv: the Args
* section header: the header of this function is holberton.h
* Return: 0 in success
*/

int main(int argc, char *argv[])
{
	int fd, _read, _close;
	Elf64_Ehdr *file;

	if (argc > 2 || argc < 2)
		dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98);
	file = malloc(sizeof(Elf64_Ehdr));
	if (file == NULL)
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
	fd = open(*(argv + 1), O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	_read = read(fd, file, sizeof(Elf64_Ehdr));
	if (_read == -1)
	{
		free(file);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	verify(file->e_idt);
	magic(file->e_idt);
	class(file->e_idt);
	data(file->e_idt);
	version(file->e_idt);
	osabi(file->e_idt);
	printf("  ABI Version:                       ");
	printf("%i\n", file->e_idt[EI_ABIVERSION]);
	type(file->e_type, file->e_idt);
	entry(file->e_entry, file->e_idt);
	free(file);
	_close = close(fd);
	if (_close)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}
	return (0);
}
