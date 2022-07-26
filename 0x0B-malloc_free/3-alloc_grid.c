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
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);

}
