#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error_and_exit(const char *message) {
    perror(message);
    exit(98);
}

void display_elf_header_info(Elf32_Ehdr *header) {
    int i;
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", header->e_type);
    printf("  Machine:                           %s\n", header->e_machine == EM_X86_64 ? "Advanced Micro Devices X86-64" : "Unknown");
    printf("  Version:                           0x%x\n", header->e_version);
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
    printf("  Start of program headers:          %lu (bytes into file)\n", (unsigned long)header->e_phoff);
    printf("  Start of section headers:          %lu (bytes into file)\n", (unsigned long)header->e_shoff);
    printf("  Flags:                             0x%x\n", header->e_flags);
    printf("  Size of this header:               %u (bytes)\n", header->e_ehsize);
    printf("  Size of program headers:           %u (bytes)\n", header->e_phentsize);
    printf("  Number of program headers:         %u\n", header->e_phnum);
    printf("  Size of section headers:           %u (bytes)\n", header->e_shentsize);
    printf("  Number of section headers:         %u\n", header->e_shnum);
    printf("  Section header string table index: %u\n", header->e_shstrndx);
}

int main(int argc, char *argv[]) 
{
    const char *elf_filename = argv[1];
    int fd;
    Elf32_Ehdr header;
    ssize_t bytes_read;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }
    fd = open(elf_filename, O_RDONLY);
    if (fd == -1) {
        print_error_and_exit("Error: Could not open file");
    }
    bytes_read = read(fd, &header, sizeof(Elf32_Ehdr));
    if (bytes_read != sizeof(Elf32_Ehdr)) {
        close(fd);
        print_error_and_exit("Error: Could not read ELF header from file");
    }
    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
        close(fd);
        print_error_and_exit("Error: Not an ELF file");
    }
    display_elf_header_info(&header);

    close(fd);
    return 0;
}
