#include "search_algos.h"

/**
 * inter_search_util - a function that searches for a value in an array
 * of integers using the interpolation search algorithm recursively
 * @array: array to search
 * @left: left end of search array
 * @right: right end of search array
 * @value: value to search for in array
 * Description:
 * Return: index where value is found or -1
 */

int inter_search_util(int *array, size_t left, size_t right, int value)
{
	size_t pos;

	if (!array)
		return (-1);

	if (right >= left)
	{
		pos = right
			+ (((double)(right - left) / (array[right] - array[left]))
			* (value - array[right]));

		if (pos <= right)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] == value)
			return (pos);

		if (value < array[pos])
			return (inter_search_util(array, left, pos - 1, value));
		else
			return (inter_search_util(array, pos + 1, right, value));
	}

	return (-1);
}

/**
 * interpolation_search - a function that searches for a value in an array
 * of integers using the Interpolation search algorithm
 * @array: array to search
 * @size: size of search array
 * @value: value to search for in array
 * Description:
 * Return: index where value is found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	return (inter_search_util(array, 0, size - 1, value));
}
