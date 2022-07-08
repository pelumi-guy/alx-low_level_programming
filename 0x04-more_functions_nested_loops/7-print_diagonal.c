/**
 * print_diagonal - a function that draws
 * a diagonal line on the terminal
 * @n: number of times to print
 * Return: Nothing
 */

#include "main.h"

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			break;

		if (i > 1)
		{
			for (j = 1; j <= (i - 1); j++)
				_putchar(' ');
		}

		_putchar('\\');

		if (i != n)
			_putchar('\n');
	
	}
	_putchar('\n');
}
