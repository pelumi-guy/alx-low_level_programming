#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print all possible combinations of single-digit numbers.
 * Return: 0
 **/
int main(void)
{
	char dig1;
	char dig2;

	for (dig1 = '0'; dig1 <= '9'; dig1++)
	{	
		for (dig2 = '0'; dig2 <= '9'; dig2++) 
		{
			putchar(dig1);
			putchar(dig2);
		}
	}


	putchar('\n');
	return (0);
}
