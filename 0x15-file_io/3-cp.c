#include "holberton.h"

#define READ_BUF_SIZE 1024

void argc_err(void);
void file_src_err(char *filename);
void file_dest_err(char *filename);
void file_close_err(int fd);

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
	
	return (1);
}

void argc_err(void)
{
	dprintf(STDERR_FILENO, "Usage cp file_from file_to\n");
	exit(97);
}

void file_src_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

void file_dest_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

void file_close_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
