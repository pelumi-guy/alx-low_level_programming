/**
 * _isdigit -  a function that checks for a digit (0 through 9).
 * @c: integer variable to checked
 * Return: Always 1 if is uppercase, 0 otherwise.
 */

#include "main.h"

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
