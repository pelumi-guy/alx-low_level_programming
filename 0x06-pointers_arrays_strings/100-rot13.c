/**
 * rot13 - a function that encodes a string using rot13
 * Description:
 * @s: string to be encoded
 * Return: Encoded string.
 */

#include "main.h"

char *rot13(char *s)
{
	int i, j;
	char *origStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *codeStr = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i]; i++)
	{
		for (j = 0; origStr[j]; j++)
			if (s[i] == origStr[j])
				s[i] = codeStr[j];
	}

	return (s);
}
