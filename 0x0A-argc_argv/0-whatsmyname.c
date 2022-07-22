/**
 * main - a program that prints its name, followed by a new line.k
 * Description:
 * @argc: number of arguments to func main
 * @argv: array of argument strings
 * Return:
 */

#include <stdio.h>
#include "main.h"

void main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
}
