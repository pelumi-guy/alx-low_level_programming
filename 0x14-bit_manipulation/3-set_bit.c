#include "main.h"

/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index.
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitComp = 1, len = 0;

	if (!n)
		return (-1);

	while (len++ < index)
	{
		if (len >= MAX_COUNT)
			return (-1);
		bitComp = bitComp << 1;
	}
	*n = (*n) | bitComp;

	return (1);
}
