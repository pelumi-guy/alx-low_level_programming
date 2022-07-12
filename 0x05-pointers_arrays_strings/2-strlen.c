/**
 * _strlen - a function that returns the length of a string.
 * Description:
 * @s: character string to find length of
 * Return: l, length of string
 */

#include <stdio.h>
#include "main.h"

int _strlen(char *s)
{
	int i, l = 0;

	for (i = 0; *(s + i); i++)
		l++;

	return (l);
}
