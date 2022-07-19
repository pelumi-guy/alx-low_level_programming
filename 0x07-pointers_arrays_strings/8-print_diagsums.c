/**
 * print_diagsums -  a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * Description:
 * @a: square matrix of integers
 * @size: size of square matrix
 * Return:
 */

#include <stdio.h>
#include "main.h"

void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);
	}


	printf("%ld, %ld\n", sum1, sum2);
}
