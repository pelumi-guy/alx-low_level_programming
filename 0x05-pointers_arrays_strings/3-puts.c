/**
 * _puts -  a function that prints a string,
 * followed by a new line, to stdout
 * Description:
 * @str: character string to be printed.
 * Return:
 */

#include <stdio.h>
#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		_putchar(*(str + i));

	_putchar('\n');
}
