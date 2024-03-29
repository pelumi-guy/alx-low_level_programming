#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * Description:
 * @h: List to be printed
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		/* printf("(nil)\n"); */
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
