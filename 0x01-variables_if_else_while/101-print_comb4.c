#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print all possible combinations of single-digit numbers.
 * Return: 0
 **/
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		for (dig2 = 0; dig2 <= 9; dig2++)
		{
			for (dig3 = 0; dig3 <= 9; dig3++)
			{
				if (dig1 != dig2 && dig1 < dig2 && dig2 < dig3)
				{
				putchar(48 + dig1);
				putchar(48 + dig2);
				putchar(48 + dig3);
					if (dig1 + dig2 + dig3 != 24)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
