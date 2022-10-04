#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character.
 * @c: integer variable to be checked.
 * Return: 1 if it is alphabet and 0 if it is not an alphabet.
 **/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

