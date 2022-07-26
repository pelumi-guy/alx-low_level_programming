#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * concat - a function to concat two strings.
 * Description:
 * @str1: source string
 * @str2: source string
 * Return: concatenated string
 */

char *concat(char *str1, char *str2)
{
	int i, j, len = 0;
	char *dest;

	if (str1 == NULL)
		str1 = "";
	else if (str2 == NULL)
		str2 = "";

	dest = str1;

	for (i = 0; str2[i]; i++)
		len++;

	for (i = len, j = 0; str2[j]; i++, j++)
		dest[i] = str2[j];

	dest[i] = '\0';

	return (dest);
}

/**
 * str_concat - a function that concatenates two strings.
 * Description:
 * @s1: string
 * @s2: string
 * Return: pointer to a new string
 */



char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i, len = 0;

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len++;


	newStr = malloc((len * sizeof(char)) + 1);

	if (newStr == NULL)
		return (NULL);

	newStr = concat(s1, s2);

	return (newStr);
}
