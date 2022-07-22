/**
 * main - a program that prints the number of arguments passed into it.
 * Description:
 * @argc: number of arguments to func main
 * @argv: array of argument strings
 * Return: 0 - Always succes.
 */

#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
