#include "main.h"

/**
 * jack_bauer - function that prints
 * every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * .
 * Return: 0 (Success)
 */


void jack_bauer(void)
{
	int hr, min, h1, h2, m1, m2;
	
	for (hr = 0; hr < 24; hr++)
	{
		h1 = hr / 10;
		h2 = hr % 10;
		for (min = 0; min < 60; min++)
		{
			m1 = min / 10;
			m2 = min % 10;
			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');

		}
	}

	return (0);	
}
