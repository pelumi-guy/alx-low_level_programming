/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * Description:
 * @width: Width of multidimensional array
 * @height: Height of multidimensional array
 * Return: 2 dimensional array of integers.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = calloc((width * height), sizeof(int));

	return (arr);
}
