#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print single digit numbers of base 10,
 *followed by a new line
 * Return: 0
 **/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');
	return (0);
}
