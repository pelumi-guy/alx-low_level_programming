#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a
 * value associated with a key.
 * Description:
 * @ht: hash table to be looked into
 * @key: key to be found
 * Return: value associated wiht element or
 *	NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *slot;

	idx = key_index((unsigned char *)key, (ht->size));
	slot = (ht->array)[idx];

	while (slot)
	{
		if (strcmp(slot->key, key) == 0)
			return (slot->value);
		slot = slot->next;
	}

	return (NULL);
}
