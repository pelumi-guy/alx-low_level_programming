#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to first element of list to search
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (!list)
		return (NULL);

	if (value == list->n)
		return (list);

	for (current = list; current->n < value && current->express;)
	{
		prev = current;
		current = current->express;

		printf("Value checked at index [%lu] = [%d]\n",
			current->index, current->n);
	}

	if (!current->express && current->n < value)
	{
		prev = current;
		while (current->next)
			current = current->next;
	}


	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);

	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	while (prev->index < current->index && prev->next)
	{
		prev = prev->next;

		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
