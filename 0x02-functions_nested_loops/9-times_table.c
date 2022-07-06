#include "main.h"

/**
 * void times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return void
 */


void times_table(void)
{
	int row, col, dig1, dig2, num;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			num = row * col;
			if (col == 0)
			{
				_putchar(num + '0');
				_putchar(',');

			}
			else if (col == 9 && num  < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else if (col == 9 && num >= 10)
			{
				dig1 = num / 10;
				dig2 = num % 10;
				_putchar(' ');
				_putchar(dig1 + '0');
				_putchar(dig2 + '0');

			}
			else if (col != 9 && num >= 10)
			{
				dig1 = num / 10;
				dig2 = num % 10;
				_putchar(' ');
				_putchar(dig1 + '0');
				_putchar(dig2 + '0');
				_putchar(',');

			}
			else
			{
				_putchar(' ');
				_putchar(' ');	
				_putchar(num + '0');
				_putchar(',');	

			}
		}
		_putchar('\n');
	}
}
