#include "main.h"

/**
 * main - check the code
 * Description- Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 **/

void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; a <= 'z'; a++)
	{
		_putchar(ch);
	}
}


int main(void)
{
	print_alphabet();
	
	_putchar('\n');
	
	return (0);
}
