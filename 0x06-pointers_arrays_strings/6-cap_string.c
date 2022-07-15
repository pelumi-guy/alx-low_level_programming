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
	int i, j, diff;
	char sym[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	diff = 'a' - 'A';

	for (i = 0; s[i]; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - diff;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == sym[j])
			{
				if ('a' <= s[i + 1] && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - diff;
			}
		}

	}

	return (s);
}
