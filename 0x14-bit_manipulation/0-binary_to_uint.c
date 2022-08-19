#include "main.h"

/**
 * power - function that computes the exponent of a number
 * @a: number to be raised to power
 * @b: power
 * Return: exponent
 **/
int power(int a, int b)
{
	int i, res = a;

	if (b == 0)
		return (1);
	for (i = 1; i < b; i++)
		res *= a;

	return (res);
}

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * Description:
 * @b: character string to be converted
 * Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dig, len, num = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (i = 0; b[i]; i++, len--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dig = b[i] - '0';
		num += (power(2, len) * dig);

	}

	return (num);
}
