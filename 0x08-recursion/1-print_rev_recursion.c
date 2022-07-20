/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * Description:
 * @s: string to be printed in reverse
 * Return:.
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
