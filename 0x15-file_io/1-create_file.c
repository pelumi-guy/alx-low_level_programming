#include "main.h"

/**
 * create_file - a function that creates a file.
 * Description:
 * @filename: name of filr to create
 * @text_content: a NULL terminated string
 * to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1 || w != len)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
