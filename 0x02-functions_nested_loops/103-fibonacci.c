/**
 * main - main block
 * Description:  By considering the terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000,
 * write a program that finds and prints the sum
 * of the even-valued terms, followed by a new line.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	unsigned long i, prev = 1, next = 1, sum = 0, fib;

	for (i = 1; ; i++)
	{
		if (i == 1)
		{
			fib = 1;
		}

		fib = prev + next;
		prev = next;
		next = fib;

		if (fib < 4000000 && (fib % 2) == 0)
		{
			sum += fib;
		}
		else if (fib >= 4000000)
		{
			break;
		}
	}
	printf("%lu\n", sum);

	return (0);
}
