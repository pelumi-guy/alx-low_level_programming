#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * Description:
 * @s1: string
 * @s2: string
 * @n: number bytes of s2 to concat
 * Return: pointer to a new string
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i, j, k, len = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0, j = 0; s1[i]; i++, j++)
		len++;
	for (i = 0, k = 0; s2[i]; i++, k++)
		len++;

	newStr = malloc(sizeof(char) * (len + 1));

	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}

	for (i = 0; i < j; i++)
		newStr[i] = s1[i];

	if (n >= len)
	{
		for (j = 0; j < k; j++, i++)
			newStr[i] = s2[j];

		newStr[i] = '\0';
	} else
	{
		for (j = 0; j < n; j++, i++)
			newStr[i] = s2[j];

		newStr[i] = '\0';
	}
	return (newStr);
}
