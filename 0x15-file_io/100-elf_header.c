#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * elf_header - displays the information contained in the ELF header
 * @elf_filename: filename of type ELF
 * Return: 0 on success
 */
int main(int argc, char elf_filename)
{
	if (argc != 2) {
		fprintf(stderr, "%s\n", "Usage: elf_header elf_filename");
		exit(98);
		}
	int fd = open(elf_filename, O_RDONLY);
	if (fd == -1) {
		fprintf(stderr, "%s\n", "Failed to open the file");
		exit(98);
		}
	Elf64_Ehdr elf_header;
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
		fprintf(stderr, "%s\n", "Failed to read the ELF header");
		exit(98);
		}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "%s\n", "Not a valid ELF file");
		exit(98);
		}
	printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1],
	elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", elf_header.e_entry);
	close(fd);
	return 0;
}
