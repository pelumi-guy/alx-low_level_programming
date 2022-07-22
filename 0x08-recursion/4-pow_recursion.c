/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y.
 * Description:
 * @x: integer to raise to power
 * @y: power
 * Return: factorial
 */

#include "main.h"

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}