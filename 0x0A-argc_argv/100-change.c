/**
 * main -  program that prints the minimum number
 * of coins to make change for an amount of money.
 * Description:
 * @argc: number of arguments to func main
 * @argv: array of argument strings
 * Return: 0 - Always succes.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i, cents, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	res = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			res++;
			cents -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
