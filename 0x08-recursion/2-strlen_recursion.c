/**
 * _strlen_recursion - a function that returns the length of a string
 * Description:
 * @s: string to be printed
 * Return: integer length os string
 */

#include "main.h"

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
