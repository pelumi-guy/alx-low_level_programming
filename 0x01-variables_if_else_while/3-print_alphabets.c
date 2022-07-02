#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print alphabet in lowercase and then in uppercase,
 *followed by a new line
 * Return: 0
 **/
int main(void)
{
	char c = 'a';
	char A = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
