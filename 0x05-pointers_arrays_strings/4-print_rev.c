/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 *
 * Description:
 * @s: character string to be printed in reverse.
 * Return:
 */

#include <stdio.h>
#include "main.h"

void print_rev(char *s)
{
	int i, l;

	for (i = 0; *(str + i); i++)
		l++;

	for (i = (l - 1); l >= 0; i--)
		_putchar(*(str + i));

	_putchar('\n');
}
