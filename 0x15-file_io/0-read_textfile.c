#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_count, write_count;

	if (!filename)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	read_count = read(fd, buf, letters);
	if (read_count == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[read_count] = '\0';

	close(fd);

	write_count = write(STDOUT_FILENO, buf, read_count);
	free(buf);
	if (write_count == -1)
		return (0);

	return (read_count);
}
