/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: Nothing
 */

#include "main.h"

void more_numbers(void)
{
	int i, j, dig1, dig2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			dig1 = j / 10;
			dig2 = j % 10;
			if (j < 10)
			{
				_putchar(dig2);
			}
			else
			{
				_putchar(dig1);
				_putchar(dig2);
			}
		}
		_putchar('\n');
	}
}
