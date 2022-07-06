#include <stdio.h>

/**
 * main - main block
 * Description: a program that prints
 * the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long prev, next, fib;
	unsigned long m, n, p, carry;

	count = 0;
	prev = 0;
	next = 1;
	for (count = 1; count <= 91; count++)
	{
		fib = prev + next;
		prev = next;
		next = fib;
		printf("%lu, ", fib);
	}
	m = prev % 1000;
	prev = prev / 1000;
	n = next % 1000;
	next = next / 1000;
	while (count <= 98)
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
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
