#include "hash_tables.h"

/**
 * hash_table_set - a function that adds
 * an element to the hash table.
 * Description:
 * @ht: hash table
 * @key: key value of element to be added to hash table
 * @value: value of new element to be added to be table
 * Return: 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, **slot;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, (ht->size));
	slot = &((ht->array)[idx]);
	if (*slot != NULL && ((strcmp((*slot)->key, key)) == 0))
	{
		(*slot)->value = strdup(value);
		if ((*slot)->value == NULL)
			return (0);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = malloc(sizeof(char) * (strlen(key) + 1));
	new->value = malloc(sizeof(char) * (strlen(value) + 1));
	if ((new->key) == NULL || (new->value) == NULL)
	{
		free(new);
		return (0);
	}

	strcpy(new->key, key);
	strcpy(new->value, value);

	new->next = *slot;
	*slot = new;

	return (1);
}
