/**
 * _strcpy - a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Description:
 * @dest: destination buffer
 * @src: source buffer
 * Return: Always 0 (Success).
 */

#include <stdio.h>
#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i, l = 0;

	for (i = 0; src[i]; i++)
		l++;

	for (i = 0; i <= l; i++)
	{
		dest[i] = src [i];
	}

	return(dest);
}
