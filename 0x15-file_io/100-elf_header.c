#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <elf.h>

#define MAGIC_NUM "\x7fELF"

void print_error(const char *msg)
{
	fprintf(stderr, "Erroe: %s\n", msg);
	exit(98);
}

void print_elf_header(const Elf64_Ehdr *ehdr)
{
	printf("Magic:   %s\n", MAGIC_NUM);
	printf("class:   %s\n", ehdr->e_ident[ELFCLASS32] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("data:    %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("version: %d\n", ehdr->e_version);
	printf("OS/ABI:  %x\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("ABI VERSION:  %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", int_elf_get_type(ehdr, 1));
	printf("Entry point address: 0x%" (PRIx64) "\n", ehdr->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header <elf_filename>");
		return 98;
	}
	
	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("failed to open file");
		return 98;
	}

	char magic[6];
	if (read(fd, magic, sizeof(magic)) != sizeof(magic) || memcmp(magic, MAGIC_NUM, sizeof(MAGIC_NUM)) != 0)
	{
		print_error("Not an ELF file");
		close(fd);
		return 98;
	}

	Elf64_Ehdr ehdr;
	if (lseek(fd, 0, SEEK_SET) == -1 || read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) 
	{
		print_error("Failed to read ELF header");
		close(fd);
		return(98);
	}
	print_elf_header(&ehdr);

	close(fd);
	return 0;
}

