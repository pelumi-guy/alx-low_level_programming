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
	char temp;

	for (i = 0; *(s + i); i++)
		l++;

	for (i = (l / 2), j = 0; i > 0; i--, j++)
	{
		temp = *(s + (l - j - 1));
		*(s + (l - j -1)) = *(s + j);
		*(s + j) = temp;
	}
}
