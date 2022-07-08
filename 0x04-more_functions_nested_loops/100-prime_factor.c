#include <stdio.h>

/**
 * main - main block
 * Description: a program that finds and prints the largest
 * prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0
 **/

int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
