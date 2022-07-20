/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * Description:
 * @s: string to be printed
 * Return:.
 */

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(*s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
