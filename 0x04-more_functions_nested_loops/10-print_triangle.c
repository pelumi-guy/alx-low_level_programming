/**
 * print_triangle - a function that prints a triangle,
 * followed by a new line.
 * @size: size of the triangle.
 * Return: Nothing
 */

#include "main.h"

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
			break;

		if (i < size)
		{
			for (j = 1; j <= (size - i); j++)
				_putchar(' ');
		}

		for (k = 1; k <= i; k++)
			_putchar('#');

		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
