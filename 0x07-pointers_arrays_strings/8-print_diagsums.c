/**
 * print_diagsums -  a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * Description:
 * @a: square matrix of integers
 * @size: size of square matrix
 * Return:
 */

#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, j;
	long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[i][i];

	for (i = 0, j = (size - 1); i < size; i++, j--)
		sum2 += a[i][j];

	printf("%d, %d", sum1, sum2);
}
