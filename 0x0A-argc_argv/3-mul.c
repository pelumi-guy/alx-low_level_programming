#include <stdio.h>
#include "main.h"

/**
 * stringToNum - a function that converts a string to
 * an integer.
 * Description:
 * @str: string to be converted
 * Return: Intger from string
 */

int stringToNum(char *str)
{
	int i;
	long int num = 0;

	if (str[0] == '-')
	{
		for (i = 1; str[i]; i++)
		{
			num *= 10;
			num += (str[i] - '0');
		}
		num *= -1;
	}
	else if (str[0] >= '0' && str[0] <= '9')
	{
		for (i = 0; str[i]; i++)
		{
			num *= 10;
			num += (str[i] - '0');
		}
	}

	/* printf("Num is: %ld\n", num); */

	return (num);
}

/**
 * main - a program that multiplies two numbers.
 * Description:
 * @argc: number of arguments to func main
 * @argv: array of argument strings
 * Return: 0 - Always succes.
 */

int main(int argc, char *argv[])
{
	long int num1, num2, sum = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = stringToNum(argv[1]);
		num2 = stringToNum(argv[2]);

		sum = num1 * num2;

		printf("%ld\n", sum);

		return (0);
	}
}
