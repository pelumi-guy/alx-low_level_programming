#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * Description:
 * @ht: hash table to delete
 * Return:
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *slot, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			slot = ht->array[i];
			while (slot)
			{
				temp = slot->next;
				free(slot->key);
				free(slot->value);
				free(slot);
				slot = temp;
			}
		}
	}
	free(ht->array);
	free(ht);

}
