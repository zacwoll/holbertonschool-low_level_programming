#include "holberton.h"

/**
  * create_file - create a file with name and content
  * @filename: filename string
  * @text_content: content of text
  * Return: 1 if success, -1 if fail
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_size, write_size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return(1);
	}

	for (text_size = 0; text_content[text_size]; text_size++)
	{}

	write_size = write(fd, text_content, text_size);

	if (write_size != text_size)
		return (-1);

	return (1);
}
