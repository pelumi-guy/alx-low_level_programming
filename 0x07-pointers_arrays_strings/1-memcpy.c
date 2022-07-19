/**
 * char *_memcpy - a function that copies memory area.
 * Description:
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes of memory to be filled
 * Return: Always 0 (Success).
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
