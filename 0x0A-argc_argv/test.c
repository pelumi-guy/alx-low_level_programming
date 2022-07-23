/**
 * main - main block
 * Description:
 * Return: Always 0 (Success).
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	char *str = "12345";

	num = atoi (str);

	printf("Your String as Num is: %d\n", num);

	return (0);
}
