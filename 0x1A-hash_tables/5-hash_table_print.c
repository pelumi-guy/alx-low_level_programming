#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * Description:
 * @ht: hash table to print
 * Return: 0
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *slot;

	if (!ht)
		return;

	printf("{");
	while(i < ht->size && ht->array[i] == NULL)
		i++;

	if (i < ht->size)
	{
		slot = ht->array[i];
		printf("'%s': '%s'", slot->key, slot->value);
		slot = slot->next;
		while(slot)
		{
			printf(", '%s': '%s'", slot->key, slot->value);
			slot = slot->next;
		}
	}

	for (i++; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		slot = ht->array[i];
		while(slot)
		{
			printf(", '%s': '%s'", slot->key, slot->value);
			slot = slot->next;
		}
	}
	printf("}\n");
}
