/**
 * main - main block
 * Description:
 * Return: Always 0 (Success).
 */

#include <stdio.h>

int main()
{
	int i;

	for (i = 0; i < 5; i++)
        {
                if (i == 2)
                {
                        printf("Ended loop at i = 2\n");
                        break;
                }
		printf("This is the itearation %d\n", i);
        }
	

	return (0);
}
