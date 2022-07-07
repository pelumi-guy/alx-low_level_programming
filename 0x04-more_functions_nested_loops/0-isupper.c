/**
 * _isupper - a function that checks for uppercase character.
 * @c: character variable to checked
 * Return: Always 1 if is uppercase, 0 otherwise.
 */

#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
