#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * Description:
 * @s1: string
 * @s2: string
 * Return: pointer to a new string
 */



char *str_concat(char *s1, char *s2)
{
	char *Str;
	int i, j, k, len = 0;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0, j = 0; s1[i]; i++, j++)
		len++;

	for (i = 0, k = 0; s2[i]; i++, k++)
		len++;

	Str = malloc(sizeof(char) * (len + 1));

	if (Str == NULL)
	{
		free(Str);
		return (NULL);
	}

	for (i = 0; i < j; i++)
		Str[i] = s1[i];

	for (j = 0; j < k; j++, i++)
		Str[i] = s2[j];

	Str[i] = '\n';
	i++;
	Str[i] = '\0';

	return (Str);
}

/**
 * argstostr -  a function that concatenates all the
 * arguments of your program.
 * Description:
 * @ac: number of arguments
 * @av: array of argument strings
 * Return: final concatented string
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *argstostr(int ac, char **av)
{
	char *oldStr = NULL, *newStr;
	int i;


	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		newStr = str_concat(oldStr, av[i]);
		oldStr = newStr;
	}

	return (newStr);

}
