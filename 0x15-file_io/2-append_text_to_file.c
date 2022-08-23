#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file.
 * Description:
 * @filename: name of filr to create
 * @text_content: a NULL terminated string
 * to append to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w = 1;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;
	w = write(fd, text_content, len);
	close(fd);

	if (w == -1)
		return (-1);

	return (1);
}
