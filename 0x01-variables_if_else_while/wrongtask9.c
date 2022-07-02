#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print all possible combinations of single-digit numbers.
 * Return: 0
 **/
int main(void)
{
	int dig1;
	int dig2;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{	
		for (dig2 = 0; dig2 <= 9; dig2++) 
		{
			putchar(48 + dig1);
			putchar(48 + dig2);
		}
	}


	putchar('\n');
	return (0);
}
