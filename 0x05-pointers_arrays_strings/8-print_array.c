/**
 * print_array - a function that prints n elements of an
 *array of integers, followed by a new line.
 * Description:
 * @a: array to be printed
 * @n: number of elements of array to print
 * Return:
 */

#include <stdio.h>
#include "main.h"

void print_array(int *a, int n)
{
	int i;

	for (i = 0, n--; n >= 0; i++, n--)
	{
		printf("%d", a[i]);

		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
