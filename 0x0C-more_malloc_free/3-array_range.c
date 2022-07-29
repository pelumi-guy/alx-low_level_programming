/**
 * array_range - a function that creates an array of integers.
 * Description:
 * @min: minimum number of array elements
 * @max: maximum number of array elements
 * Return: pointer to new memory location
 */

#include <stdio.h>
#include "main.h"

int *array_range(int min, int max)
{
	unsigned int i, len = (max - min) + 1;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++, min++)
			*(ptr + i) = min;

		return (ptr);
	}
}
