/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * Description:
 * @s: string to be converted to uppercase
 * Return: s - uppercase string
 */

#include "main.h"

char *string_toupper(char *s)
{
	int i, diff;

	diff = 'a' - 'A';

	for (i = 0; s[i]; i++)
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - diff;


	return (s);
}
