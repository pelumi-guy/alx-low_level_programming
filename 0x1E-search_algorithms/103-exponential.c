#include "search_algos.h"

/**
 * print_search - a function that prints the search sub-array
 * @array: array to search
 * @left: left edge of search sub-array
 * @right: right edge of search sub-array
 * Description:
 * Return:
 */

void print_search(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
}

/**
 * bin_search_util - a function that searches for a value in an array
 * of integers using the Binary search algorithm recursively
 * @array: array to search
 * @left: left end of search array
 * @right: right end of search array
 * @value: value to search for in array
 * Description:
 * Return: index where value is found or -1
 */

int bin_search_util(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (!array)
		return (-1);

	if (right >= left)
	{
		mid = ((right - left) / 2) + left;

		print_search(array, left, right);
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (value < array[mid])
			return (bin_search_util(array, left, mid - 1, value));
		else
			return (bin_search_util(array, mid + 1, right, value));
	}

	return (-1);
}

/**
 * exponential_search - a function that searches for a value in an array
 * of integers using the Exponential search algorithm
 * @array: array to search
 * @size: size of search array
 * @value: value to search for in array
 * Description:
 * Return: index where value is found or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	
	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			i / 2, MIN(i, size - 1));

	return (bin_search_util(array, i / 2, MIN(i, size - 1), value));
}
