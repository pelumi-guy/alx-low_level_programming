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

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
