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
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				return ('\0');
			}
			num *= 10;
			num += (str[i] - '0');
		}
		num *= -1;
	}
	else if (str[0] >= '0' && str[0] <= '9')
	{
		for (i = 0; str[i]; i++)
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				return ('\0');
			}
			num *= 10;
			num += (str[i] - '0');
		}
	}
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
	long int num, sum = 0;
	int i;

	if (argc < 2)
	{
		printf("%ld\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = stringToNum(argv[i]);

			if (num == '\0')
			{
				printf("Error\n");
				return (1);
			}

			sum += num;
		}

		printf("%ld\n", sum);

	}
	return (0);
}
