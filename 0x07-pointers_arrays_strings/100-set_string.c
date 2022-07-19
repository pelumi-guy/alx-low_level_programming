/**
 * set_string - a function that sets the
 * value of a pointer to a char.
 * Description:
 * @s: pointer to string
 * @to: string pointer
 * Return:
 */

#include <stdio.h>
#include "main.h"

void set_string(char **s, char *to)
{
	*s = to;
}
