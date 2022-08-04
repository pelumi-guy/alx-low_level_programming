/**
 * int_index - a function that searches for an integer.
 * Description:
 * @array: array of integers
 * @size: size of array
 * @cmp: comparison function
 * Return: index of found integer or -1
 */

#include <stdio.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);

		if (res != 0)
			return (i);
	}
	return (-1);
}
