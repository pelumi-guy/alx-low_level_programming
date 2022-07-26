/**
 * free_grid -  a function that frees a 2 dimensional
 *grid previously created by your alloc_grid function.
 * Description:
 * @grid: grid to be freed
 * @height: Height of multidimensional array
 * Return:
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		realloc(grid[i], 0);
}
