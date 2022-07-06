/**
 * main - main block
 * Description: a program that prints
 * the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int from91to98(unsigned long m, unsigned long n, unsigned long p, unsigned long carry, unsigned long prev, unsigned long next, unsigned long fib)
{
	int i;

	for (i = 91; i <= 98; i++)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		fib = (prev + next) + carry;
		m = n;
		n = p;
		prev = next;
		next = fib;
		if (p >= 100)
			printf("%lu%lu", fib, p);
		else
			printf("%lu0%lu", fib, p);
		if (i != 98)
			printf(", ");
	}

}	

int main(void)
{
	unsigned long i, prev = 1, next = 1, fib;
	unsigned long m, n, p, carry;

	for (i = 1; i <= 91 ; i++)
	{
		if (i == 1)
		{
			fib = 1;
			printf("%lu, ", fib);
		}
		else
		{
			fib = prev + next;
			prev = next;
			next = fib;
			printf("%lu, ", fib);
		}	

	}
	m = prev % 1000;
	prev = prev / 1000;
	n = next % 1000;
	next = next / 1000;

	int from91to98(m, n, p, carry, prev, next, fib);

	printf("\n");

	return (0);
}
