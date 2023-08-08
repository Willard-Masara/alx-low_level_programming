#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display_elf_header(const Elf64_Ehdr *header)
{
	int i;
	printf("Magic: ");
	       	for (i = 0; i < EI_NIDENT; i++)
				{
					printf("%02x ", header->e_ident[i]);
				}
	printf("\n");
	printf("Class:                             ");
	switch (header->e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("None\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
            break;
	}
	
	printf("Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
        case ELFDATANONE:
            printf("None\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
            break;
	}
	
	printf("Version:                           %d\n", header->e_ident[EI_VERSION]);
	
	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        default:
            printf("<unknown>\n");
            break;
	}
	
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	
	printf("Type:                              ");
	switch (header->e_type)
	{
        case ET_NONE:
            printf("None (unknown type)\n");
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
            printf("<unknown>\n");
            break;
	}

	printf("Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;
	if (argc != 2)
	{
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
        fprintf(stderr, "Error: Cannot open file %s\n", filename);
        exit(98);
	}


	if (read(fd, &header, sizeof(header)) != sizeof(header))
			{
			fprintf(stderr, "Error: Cannot read ELF header\n");
			close(fd);
			exit(98);
			}
			
			if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
			{
			fprintf(stderr, "Error: Not an ELF file: %s\n", filename);
			close(fd);
			exit(98);
			}

	display_elf_header(&header);

	close(fd);
	return (0);
}

