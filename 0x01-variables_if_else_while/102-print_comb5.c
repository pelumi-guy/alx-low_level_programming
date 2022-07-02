#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print all possible combinations of two two-digits numbers.
 * Return: 0
 **/
int main(void)
{
	int dig1, dig2, dig3, dig4, num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		dig1 = num1 / 10;
		dig2 = num1 % 10;
		for (num2 = 0; num2 <= 99; num2++)
		{
			if (num1 < num2)
			{
				dig3 = num2 / 10;
				dig4 = num2 % 10;

				putchar(48 + dig1);
				putchar(48 + dig2);
				putchar(' ');
				putchar(48 + dig3);
				putchar(48 + dig4);
				if (num1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');
	return (0);
}
