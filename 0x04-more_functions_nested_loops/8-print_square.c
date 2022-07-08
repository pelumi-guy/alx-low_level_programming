/**
 * print_square - a function that prints a square,
 * followed by a new line.
 * @size: size of square
 * Return: Nothing
 */

#include "main.h"

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
			break;

		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}

		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
