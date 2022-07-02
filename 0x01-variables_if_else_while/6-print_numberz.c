#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print all single digit numbers of base 10,
 *followed by a new line
 * Return: 0
 **/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
