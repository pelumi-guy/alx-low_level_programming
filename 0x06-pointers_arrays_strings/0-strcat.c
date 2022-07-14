/**
 * char *_strcat - a function that concatenates two strings.
 * Description:
 * @dest: Destination string to be concatenated to
 * @src: Destination string to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j, ldest = 0;

	for (i = 0; dest[i]; i++)
		ldest++;

	for (i = ldest, j = 0; src[j]; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
