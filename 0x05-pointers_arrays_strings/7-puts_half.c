/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: character string to be printed.
 * Return:
 */

#include <stdio.h>
#include "main.h"

void puts_half(char *str)
{
	int i, l = 0;

	for (i = 0; *(str + i); i++)
		l++;

	if ((l % 2) == 0)
	{
		for (i = (l / 2); *(str + i); i++)
			_putchar(*(str + i));
	}
	else if ((l % 2) != 0)
	{
		for (i = ((l - 1) / 2); *(str + i); i++)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
