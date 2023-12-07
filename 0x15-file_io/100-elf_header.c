#include <elf.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident) {
if (e_ident[EI_MAG0] != ELFMAG0 || 
e_ident[EI_MAG1] != ELFMAG1 || 
e_ident[EI_MAG2] != ELFMAG2 || 
e_ident[EI_MAG3] != ELFMAG3) {
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
void print_header_info(Elf64_Ehdr *header) {
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) {
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                            %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data:                             %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                          %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                           %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
printf("  ABI Version:                      %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                             %s\n", header->e_type == ET_NONE ? "NONE (None)" :
header->e_type == ET_REL ? "REL (Relocatable file)" :
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
header->e_type == ET_DYN ? "DYN (Shared object file)" :
header->e_type == ET_CORE ? "CORE (Core file)" : "Unknown");
printf("  Entry point address:              %#lx\n", (unsigned long)header->e_entry);
}
int main(int argc, char *argv[]) {
if (argc != 2) {
dprintf(STDERR_FILENO, "Usage: %s <file_name>\n", argv[0]);
return 98;
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1) {
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
return 98;
}
Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) == -1) {
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
close(fd);
return 98;
}
check_elf(header.e_ident);
print_header_info(&header);
close(fd);
return 0;
}

