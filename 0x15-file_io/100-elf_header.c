#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void display_magic(Elf64_Ehdr header);
void display_class(Elf64_Ehdr header);
void display_data(Elf64_Ehdr header);
void display_version(Elf64_Ehdr header);
void display_osabi(Elf64_Ehdr header);
void display_abi_version(Elf64_Ehdr header);
void display_type(Elf64_Ehdr header);
void display_entry_point(Elf64_Ehdr header);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	display_magic(header);
	display_class(header);
	display_data(header);
	display_version(header);
	display_osabi(header);
	display_abi_version(header);
	display_type(header);
	display_entry_point(header);

	close(fd);
	return (0);
}

/**
 * display_magic - Display the magic bytes of the ELF header
 * @header: The ELF header
 */
void display_magic(Elf64_Ehdr header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
}

/**
 * display_class - Display the class (32/64 bit) of the ELF file
 * @header: The ELF header
 */
void display_class(Elf64_Ehdr header)
{
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * display_data - Display the data format (little/big endian)
 * @header: The ELF header
 */
void display_data(Elf64_Ehdr header)
{
	printf("  Data:                             ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * display_version - Display the version of the ELF file
 * @header: The ELF header
 */
void display_version(Elf64_Ehdr header)
{
	printf("  Version:                          ");
	printf("%d (current)\n", header.e_ident[EI_VERSION]);
}

/**
 * display_osabi - Display the OS/ABI of the ELF file
 * @header: The ELF header
 */
void display_osabi(Elf64_Ehdr header)
{
	printf("  OS/ABI:                           ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * display_abi_version - Display the ABI version of the ELF file
 * @header: The ELF header
 */
void display_abi_version(Elf64_Ehdr header)
{
	printf("  ABI Version:                      ");
	printf("%d\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * display_type - Display the type of the ELF file
 * @header: The ELF header
 */
void display_type(Elf64_Ehdr header)
{
	printf("  Type:                             ");
	switch (header.e_type)
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
			printf("Unknown\n");
			break;
	}
}

/**
 * display_entry_point - Display the entry point address of the ELF file
 * @header: The ELF header
 */
void display_entry_point(Elf64_Ehdr header)
{
	printf("  Entry point address:               ");
	printf("%#lx\n", header.e_entry);
}
