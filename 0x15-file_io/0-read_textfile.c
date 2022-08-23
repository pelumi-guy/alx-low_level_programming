#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * Description:
 * Return: Actual number of letters
 * it couls read and print of 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t count;

	if (filename == NULL)
		return (0);

	buf = malloc(letters++);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = read(fd, buf, letters);
	buf[letters] = '\0';

	write(STDIN_FILENO, buf, letters);

	close (fd);

        return(count);
}
