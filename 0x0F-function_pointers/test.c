/**
 * main - main block
 * Description:
 * Return: Always 0 (Success).
 */

#include <stdio.h>

int is_98(int elem)
{
	    return (98 == elem);
}

int main()
{
	int positive = is_98(98);
	int negative = is_98(2);

	printf("positive returns: %d\n", positive);
	printf("negative returns: %d\n", negative);
	return (0);
}
