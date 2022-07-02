#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print alphabet in lowercase, followed by a new line
 * Return: 0
 **/
int main(void)
{
	char dig;

	for(dig = '0'; dig <= '9'; dig++)
	{
		putchar(dig);
	}
	for(dig = 'a'; dig < 'g'; dig++)
	{
		putchar(dig);
	}

	putchar('\n');
	return (0);
}
