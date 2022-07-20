/**
 * factorial -  function that returns the
 * factorial of a given number.
 * Description:
 * @n: integer to find factorial of
 * Return: factorial
 */

#include "main.h"

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
