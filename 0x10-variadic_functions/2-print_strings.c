/**
 * print_stringss - a function that prints strings, followed by a new line.
 * Description:
 * @n: number of arguments
 * @separator: sperating delinimiter
 * Return: sum of integers
 */

#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arglist;
	char *str;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char *);

		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arglist);


}
