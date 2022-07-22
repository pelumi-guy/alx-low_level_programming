/**
 * main - a program that prints all arguments it receives.
 * Description:
 * @argc: number of arguments to func main
 * @argv: array of argument strings
 * Return: 0 - Always succes.
 */

#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
