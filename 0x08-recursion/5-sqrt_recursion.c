#include "main.h"

/**
 * pow_op - returns the natural square root of a number.
 * @n: input number
 * @c: iterator
 * Return: square root or -1
 */
int pow_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * Description:
 * @n: integer
 *
 * Return:
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (pow_op(n, 2));
	}
}
