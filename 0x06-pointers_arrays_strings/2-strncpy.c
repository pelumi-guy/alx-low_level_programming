/**
 * _strncpy - a function that copies a string.
 * Description:
 * @dest: Destination string to be concatenated to
 * @src: Destination string to concatenate
 * @n: number of bytes from src to use.
 *
 * Return: a pointer to the resulting string dest
 */

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
