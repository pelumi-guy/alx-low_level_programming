/**
 * cap_string - a function that capitalizes
 * all words of a string.
 * Description:
 * @s: string to be converted to uppercase
 * Return: s - uppercase string
 */

#include "main.h"

char *cap_string(char *s)
{
	int i, diff;

	diff = 'a' - 'A';

	for (i = 0; s[i]; i++)
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - diff;


	return (s);
}
