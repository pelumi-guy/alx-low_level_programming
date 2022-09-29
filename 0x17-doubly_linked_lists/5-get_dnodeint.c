#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list.
 * Description:
 * @head: Pointer to head node
 * @index: Index to be returned
 * Return: Index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; node != NULL && i < index; i++)
		node = node->next;
	return (node);
}
