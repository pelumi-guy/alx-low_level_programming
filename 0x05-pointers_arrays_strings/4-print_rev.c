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
	int i, j, l = 0;

	for (i = 0; *(s + i); i++)
		l++;

	for (j = (l - 1); j >= 0; j--)
		_putchar(*(s + j));

	_putchar('\n');
}
