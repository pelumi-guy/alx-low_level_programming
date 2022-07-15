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
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}

}
