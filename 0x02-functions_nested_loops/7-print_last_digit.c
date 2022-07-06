#include "main.h"

/**
 * print_last_digit - function that  prints the last digit of a number.
 * @i: the integer variable.
 * Return: print last digit of the input number.
 */


int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
	{
		i = i * -1;
	}

	_putchar (i + '0');

	return (i);
}
