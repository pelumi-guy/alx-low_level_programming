/**
 * _calloc - a function that allocates memory
 * for an array, using malloc.
 * Description:
 * @nmemb: number of array elements
 * @size: size in bytes of array elements
 * Return: pointer to new memory location
 */

#include <stdio.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb * size; i++)
			*((char *)ptr + 1) = 0;

		return (ptr);
	}
}
