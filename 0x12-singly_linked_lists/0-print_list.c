#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * Description:
 * @h: List to be printed
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
