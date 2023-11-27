#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <stdarg.h>

void print_error_and_exit(int exit_code, const char *format, ...) {
	va_list args;
	va_start(args, format);
	fprintf(stderr, format, args);
	va_end(args);
	exit(exit_code);
}

void display_elf_header_info(Elf64_Ehdr *header)
{
    int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", header->e_type);
	printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) 
{
    const char *elf_filename;
    int fd;
    Elf64_Ehdr header;
    ssize_t bytes_read;

	if (argc != 2) {
		print_error_and_exit(98, "Usage: %s elf_filename\n", argv[0]);
	}

	elf_filename = argv[1];
    fd = open(elf_filename, O_RDONLY);
	if (fd == -1) {
		print_error_and_exit(98, "Error: Could not open file '%s'\n", elf_filename);
	}
    bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr)) {
		close(fd);
		print_error_and_exit(98, "Error: Could not read ELF header from file '%s'\n", elf_filename);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		close(fd);
		print_error_and_exit(98, "Error: '%s' is not an ELF file\n", elf_filename);
	}
	display_elf_header_info(&header);

	close(fd);
	return 0;
}
