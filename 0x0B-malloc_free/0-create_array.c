/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * Description:
 * @size: size of array
 * @c: character to be initialised with
 *
 * Return: Always 0 (Success).
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = calloc(size, sizeof(c));

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
