/**
 * rev_string - a function that reverses a string.
 *
 * Description:
 * @s: character string to be reversed.
 * Return:
 */

#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
	int i, j, l = 0;
	char d[];

	for (i = 0; *(s + i); i++)
		l++;

	for (i = (l - 1), j = 0; i >= 0; i--, j++)
		d[j] = (*(s + i));

	s = d;
}
