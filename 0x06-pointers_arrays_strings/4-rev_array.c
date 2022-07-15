/**
 * reverse_array - a function that reverses the
 * content of an array of integers.
 * Description:
 * @a: Array to be reversed
 * @n: number of elements of array.
 *
 * Return: a pointer to the resulting string dest
 */

#include "main.h"

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
