#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list.
 * Description:
 * @h: head node of list to be printed
 * Return: Number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
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
