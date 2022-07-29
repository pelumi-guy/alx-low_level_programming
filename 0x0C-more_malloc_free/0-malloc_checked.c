/**
 * malloc_checked - a function that allocates memory using malloc.
 * Description:
 * @b: unsigned integer
 * Return: pointer to allocated memory or exit status
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr ==  NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
