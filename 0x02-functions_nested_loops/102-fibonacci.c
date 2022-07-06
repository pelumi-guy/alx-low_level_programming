/**
 * main - main block
 * Description: a program that prints
 * the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main()
{
	int i, prev = 1, next = 1, count = 1, fib;

	for (i = 1; ; i++)
	{
		if (i == 1)
		{
			fib = 1;
			count++;
			printf("%d, ", fib);
		}
		else if (count < 50)
		{
			fib = prev + next;
			prev = next;
			next = fib;
			count++;
			printf("%d, ", fib);
		}
		else if (count == 50)
		{
			fib = prev + next;
			prev = next;
			next = fib;
			count++;
			printf("%d", fib);
			break;

		}
		
	}
	printf("\n");

	return (0);
}
