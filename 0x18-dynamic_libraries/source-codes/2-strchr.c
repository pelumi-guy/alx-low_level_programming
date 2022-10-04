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
int a;

while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
