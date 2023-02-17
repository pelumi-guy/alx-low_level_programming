#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array to search
 * @size: size of search array
 * @value: value to search for in array
 * Description:
 * Return: 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
