#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

/**
 * jump_list - searches for a value in a sorted linked list of integers using
 * a jump search algorithm
 * @list: pointer to first element of list to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *low, *high;

	if (!list || size == 0)
		return (NULL);

	if (value == list->n)
		return (list);

	jump = sqrt(size);

	for (high = list; high->index < size - 1 && high->n < value;)
	{
		low = high;
		for (i = 0; i < jump && high->index < size - 1; i++)
			high = high->next;

		printf("Value checked at index [%lu] = [%d]\n",
		       high->index, high->n);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n",
		low->index, high->index);

	printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
	while (low->index < MIN(high->index, size - 1))
	{
		low = low->next;

		printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);

	}

	return (NULL);
}
