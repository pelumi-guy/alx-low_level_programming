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

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d,", a[i]);
		else
			_putchar(a[i]);
	}
	_putchar('\n');

	return (0);
}
