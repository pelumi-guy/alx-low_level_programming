#include "lists.h"

/**
 * list_len - a function that returns the
 * number of elements in a linked list_t list.
 * Description:
 * @h: List to be printed
 * Return: Number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
