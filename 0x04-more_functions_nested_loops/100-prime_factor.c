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
	long int n = 612852475143;
	long int div = 2, ans = 0, maxPrime;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxPrime = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxPrime);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
