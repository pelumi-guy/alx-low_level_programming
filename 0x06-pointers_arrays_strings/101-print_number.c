/**
 * print_number - a function that prints an integer.
 * Description:
 *
 * @n: integer to be printed
 * Return:
 */

#include "main.h"

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}

	if (num / 10)
		print_number(n / 10);

	_putchar((num % 10) + '0');
}
