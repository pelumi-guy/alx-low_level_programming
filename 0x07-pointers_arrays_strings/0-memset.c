/**
 * char *_memset - a function that fills memory with a constant byte.
 * Description:
 * @s: pointer to memory s
 * @b: constant byte
 * @n: number of bytes of memory to be filled
 * Return: Always 0 (Success).
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b
	}

	return (s);
}
