/**
 * print_name - Write a function that prints a name.
 * Description:
 * @name: name to print
 * @f: function to print name with
 * Return:
 */

#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
