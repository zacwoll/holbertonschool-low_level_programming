#include "holberton.h"

/**
  * append_text_to_file - append text to filename
  * @filename: filename string
  * @text_content: content of text
  * Return: 1 on success, -1 on fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_size, write_size;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (!fd)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (text_size = 0; text_content[text_size]; text_size++)
	{}

	write_size = write(fd, text_content, text_size);
	close(fd);

	if (text_size != write_size)
		return (1);
}
