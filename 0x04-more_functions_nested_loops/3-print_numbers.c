/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: Nothing
 */

#include "main.h"

int print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
