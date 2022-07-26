#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * concat - a function to concat two strings.
 * Description:
 * @str1: source string
 * @str2: source string
 * @dest: destination string
 * Return: concatenated string
 */

char *concat(char *str1, char *str2, char *dest)
{
	int i, j;

	if (str1 == NULL)
		str1 = "";
	else if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i]; i++)
	{
		dest[i] = str1[i];
	}

	for (i, j = 0; str2[j]; i++, j++)
	{
		dest[i] = str2[j];
	}

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

	if (str == NULL)
		return (NULL);

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
