/**
 * leet - a function that encodes a string into 1337
 * Description:
 * @s: string to be encoded
 * Return: Encoded string.
 */

#include "main.h"

char *leet(char *s)
{
	int i, j;
	char *strLow = "aeotl";
	char *strUp = "AEOTL";
	char *strNum = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
			if (s[i] == strLow[j] || s[i] == strUp[j])
				s[i] = strNum[j];
	}

	return (s);
}
