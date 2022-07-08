/**
 * print_line - a function that draws
 * a straight line in the terminal.
 * @n: number of times to print _
 * Return: Nothing
 */

#include "main.h"

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			break;

		_putchar('_');
	}
	_putchar('\n');
}
