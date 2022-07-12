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

	for (i = 0; *(s + i); i++)
		l++;

	for (i = (l - 1); i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
