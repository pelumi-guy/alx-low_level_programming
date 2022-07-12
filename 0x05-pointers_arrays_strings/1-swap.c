/**
 * swap_int - a function that swaps
 * the values of two integers.
 * Description:
 * @a: int pointer variable to be swapped
 * @b: int pointer variable to be swapped
 * Return:
 */

#include <stdio.h>
#include "main.h"

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
