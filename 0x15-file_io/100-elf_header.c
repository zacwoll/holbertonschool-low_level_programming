#include <string.h>
#include <elf.h>
#include "holberton.h"

void print_elf(void);

/**
 * main - Displays ELF h info
 * @argc: Argument count
 * @argv: Argument Vector, contains name of ELF file
 * Return: 0 on success, 98 on fail
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr *h;
	ssize_t read_size;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_h elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (!h)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}
	read_size = read(fd, h, sizeof(Elf64_Ehdr));
	if (read_size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (memcmp((*h).e_ident, ELFMAG, SELFMAG) == 0)
		print_elf();
	else
	{
		dprintf(STDERR_FILENO, "Error: not a valid ELF file");
		exit(98);
	}
	close(fd);
	return (0);
}

/**
 * print_elf - Print ELF h information
 */
void print_elf(void)
{
	printf("ELF Header:\n");
	printf("  Magic:\n  Class:\n  Data:\n  Version:\n  OS/ABI:\n");
	printf("  ABI Version:\n  Type:\n  Entry point address:\n");
}
