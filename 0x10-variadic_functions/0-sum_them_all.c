/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * Description:
 * @n: number of arguments
 * Return: sum of integers
 */

#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);
	va_end(arglist);

	return (sum);
}
