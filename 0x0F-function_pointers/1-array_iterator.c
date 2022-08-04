/**
 * array_iterator - Write a function that executes a
 * function given as a parameter on each element of an array.
 * Description:
 * @array: size of array
 * @size: size of array
 * @action: function to run
 * Return:
 */

#include <stdio.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size <= 0 ||  action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		action(*(array + i));
}
