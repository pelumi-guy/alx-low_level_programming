/**
 * _strncat - a function that concatenates two strings.
 * Description:
 * @dest: Destination string to be concatenated to
 * @src: Destination string to concatenate
 * @n: number of bytes from src to use.
 *
 * Return: a pointer to the resulting string dest
 */

#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, j, ldest = 0;

	for (i = 0; dest[i]; i++)
		ldest++;

	for (i = ldest, j = 0; src[j] != '\0' && j < n; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
