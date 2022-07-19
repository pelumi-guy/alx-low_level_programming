/**
 * char *_strchr - a function that locates a character in a string.
 * Description:
 * @s: string to be searched
 * @c: character to be found
 * Return: Always pointer to first occurence of char or NULL
 */

#include "main.h"

char *_strchr(char *s, char c)
{
	char *find;
	int i, l = 0;

	*find = '\0';

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

	if (*find == c)
		return (find);
	else if (*find == '\0')
		return (NULL);
}
