#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define EI_NIDENT 16

/**
 * struct Elf64_Ehdr - ELF header structure
 *
 * @e_ident: ELF identification
 * @e_type: Object file type
 * @e_machine: Machine architecture
 * @e_version: ELF version
 * @e_entry: Entry point virtual address
 * @e_phoff: Program header table file offset
 * @e_shoff: Section header table file offset
 * @e_flags: Processor-specific flags
 * @e_ehsize: ELF header size in bytes
 * @e_phentsize: Program header table entry size
 * @e_phnum: Program header table entry count
 * @e_shentsize: Section header table entry size
 * @e_shnum: Section header table entry count
 * @e_shstrndx: Section header string table index
 *
 * Description: The ELF header contains essential information about the ELF
 * file format. This structure represents the format of the ELF header for
 * 64-bit systems.
 */
typedef struct Elf64_Ehdr
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_elf_header(const Elf64_Ehdr *h);
int main(int argc, char *argv[]);
void print_error(const char *msg);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
