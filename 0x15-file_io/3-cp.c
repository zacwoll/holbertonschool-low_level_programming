#include "holberton.h"

#define READ_BUF_SIZE 1024

void argc_err(void);
void file_src_err(char *filename);
void file_dest_err(char *filename);
void file_close_err(int fd);

/**
  * main - Entry Point
  * @argc: argument count
  * @argv: command line arguments
  * Return: 1 on success, 97-100 otherwise
  */
int main(int argc, char **argv)
{
	int fd_src, fd_dest;
	ssize_t read_size;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
		argc_err();

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		file_src_err(argv[1]);

	fd_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_dest == -1)
		file_dest_err(argv[2]);

	while ((read_size = read(fd_src, buf, 1024)) > 0)
		if (read_size != write(fd_dest, buf, read_size))
			file_dest_err(argv[2]);

	if (read_size == -1)
		file_src_err(argv[1]);

	fd_src = close(fd_src);
	fd_dest = close(fd_dest);
	if (fd_src)
		file_close_err(fd_src);
	if (fd_dest)
		file_close_err(fd_dest);

	return (0);
}

/**
  * argc_err - argument count error
  */
void argc_err(void)
{
	dprintf(STDERR_FILENO, "Usage cp file_from file_to\n");
	exit(97);
}

/**
  * file_src_err - can't read from src file
  * @filename: filename string
  */
void file_src_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
  * file_dest_err - can't write to dest file
  * @filename: filename string
  */
void file_dest_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
  * file_close_err - can't close file
  * @fd: file descriptor of attempted close (-1)
  */
void file_close_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
