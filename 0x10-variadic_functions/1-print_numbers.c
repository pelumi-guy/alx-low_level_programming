/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * Description:
 * @n: number of arguments
 * @separator: sperating delinimiter
 * Return: sum of integers
 */

#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arglist;

	if (separator == NULL)
		return;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(arglist);

	printf("\n");
}
