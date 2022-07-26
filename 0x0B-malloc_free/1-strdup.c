#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * StrCopy - a function to copy one string into another.
 * Description:
 * @str1: source string
 * @str2: destination string
 * Return:g
 */

void StrCopy(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i]; i++)
	{
		str2[i] = str1[i];
	}

	str2[i] = '\0';
}

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * Description:
 * @str: string to copy
 * Return: pointer to a new string
 */



char *_strdup(char *str)
{
	char *newStr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	newStr = malloc((len * sizeof(char)) + 1);
	StrCopy(str, newStr);

	return (newStr);
}
