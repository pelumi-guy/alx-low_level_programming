#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: kay to be indexed
 * @size: size of array bucket
 * Description:
 * Return: 0
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
