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
/*
char *concat(char *str1, char *str2)
{
	int i, j, len = 0;
	char *dest;

	
	dest = str1;

	for (i = 0; str2[i]; i++)
		len++;

	for (i = len, j = 0; str2[j]; i++, j++)
		dest[i] = str2[j];

	dest[i] = '\0';

	return (dest);
} */

/**
 * str_concat - a function that concatenates two strings.
 * Description:
 * @s1: string
 * @s2: string
 * Return: pointer to a new string
 */



/* char *str_concat(char *s1, char *s2) */
void main()
{
	char *newStr, *s1 = "A quick brown", *s2 = "fox jumps over the lazy dog";
	int i, j, k, len = 0;


	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";

		
	for (i = 0, j = 0; s1[i]; i++, j++)
		len++;
	
	printf("length of s1: %d\n", len);

	for (i = 0, k = 0; s2[i]; i++, k++)
		len++;
	
	printf("length of s2: %d\n", len);


	newStr = malloc(sizeof(char) * (len + 1));

	if (newStr == NULL)
	{
		free(newStr);
	/*	return (NULL); */
	}

	for (i = 0; i < j; i++)
		newStr[i] = s1[i];

	for (j = 0; j < k; j++, i++)
		newStr[i] = s2[j];

	printf("newStr is: %s\n", newStr);

	/*  return (newStr); */
}
