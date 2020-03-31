#include "holberton.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != 0; i++)
		;

	i = write(fd, text_content, i);
	close(fd);

	return (i == -1 ? -1 : 1);
}
