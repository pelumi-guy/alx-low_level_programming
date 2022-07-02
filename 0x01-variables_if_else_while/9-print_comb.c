#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print all possible combinations of single-digit numbers.
 * Return: 0
 **/
int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		putchar(48 + dig);
		if (dig < 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');
	return (0);
}
