#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void dpy_elf_hdr(const Elf64_Ehdr *elf_hdr);
void dpy_err(const char *err_msg);
void pnt_vsn(const Elf64_Ehdr *elf_hdr);
void pnt_osabi(const Elf64_Ehdr *elf_hdr);
void pnt_typ(const Elf64_Ehdr *elf_hdr);
void pnt_ent(const Elf64_Ehdr *elf_hdr);

/**
 * main - check the code
 * @argc: ...
 * @argv: ...
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	const char *f_h;
	int fd;
	Elf64_Ehdr elf_hdr;

	if (argc != 2)
		dpy_err("Usage: elf_header elf_filename");

	f_h = argv[1];

	fd = open(f_h, O_RDONLY);
	if (fd < 0)
		dpy_err("Failed to open file");

	if (read(fd, &elf_hdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		dpy_err("Failed to read ELF header");
	}

	/* Verify the file is an ELF file */
	if (elf_hdr.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_hdr.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_hdr.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_hdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		dpy_err("The file is not an ELF file");
	}

	dpy_elf_hdr(&elf_hdr);

	close(fd);
	return (0);
}

/**
 * dpy_elf_hdr - ...
 * @elf_hdr: ...
 *
 * Return: ...
 */

void dpy_elf_hdr(const Elf64_Ehdr *elf_hdr)
{
	int i;

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (i = 0; i < (EI_NIDENT - 1); i++)
		printf("%02x ", elf_hdr->e_ident[i]);
	printf("%02x", elf_hdr->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			elf_hdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	printf("  Data:                              %s\n",
			elf_hdr->e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian"
			: "2's complement, big endian");

	pnt_vsn(elf_hdr);
	pnt_osabi(elf_hdr);

	printf("  ABI Version:                       %d\n",
			elf_hdr->e_ident[EI_ABIVERSION]);

	print_type(elf_hdr);

	print_entry(elf_hdr);
}

/**
 * dpy_err - ...
 * @err_msg: ...
 *
 * Return: ...
 */

void dpy_err(const char *err_msg)
{
	fprintf(stderr, "Error: %s\n", err_msg);
	exit(98);
}

/**
 * pnt_vsn - Prints the version of an ELF header.
 * @elf_hdr: ...
 */

void pnt_vsn(const Elf64_Ehdr *elf_hdr)
{
	printf("  Version:                           %d",
			elf_hdr->e_ident[EI_VERSION]);

	if (elf_hdr->e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * pnt_osabi - Prints the osabi indent of an ELF header.
 * @elf_hdr: ...
 */

void pnt_osabi(const Elf64_Ehdr *elf_hdr)
{
	printf("  OS/ABI:                            ");
	switch (elf_hdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_hdr->e_ident[EI_OSABI]);
			break;
	}
}

/**
 * pnt_typ - Prints the type of an ELF header.
 * @elf_hdr: ...
 */

void pnt_typ(const Elf64_Ehdr *elf_hdr)
{
	unsigned int e_type = elf_hdr->e_type;

	if (elf_hdr->e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}

/**
 * pnt_ent - Prints the entry point of an ELF header.
 * @elf_hdr: ...
 */

void pnt_ent(const Elf64_Ehdr *elf_hdr)
{
	const unsigned char *ei = elf_hdr->e_ident;
	Elf64_Addr ee = elf_hdr->e_entry;

	printf("  Entry point address:               ");

	if (ei[EI_DATA] == ELFDATA2MSB)
	{
		ee = ((ee << 8) & 0xFF00FF00) |
			  ((ee >> 8) & 0xFF00FF);
		ee = (ee << 16) | (ee >> 16);
	}

	if (ei[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)ee);

	else
		printf("%#lx\n", ee);
}
