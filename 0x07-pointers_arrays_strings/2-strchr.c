/**
 * char *_strchr - a function that locates a character in a string.
 * Description:
 * @s: string to be searched
 * @c: character to be found
 * Return: Always pointer to first occurence of char or NULL
 */

#include <stdio.h>

char *_strchr(char *s, char c)
{
	char *find = 0;
	int i, l;

	for (i = 0; s[i]; i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (s[i] == c)
		{
			find = &s[i];
			break;
		}
	}

	if (find)
		return (find);
	else
		return (NULL);
}
