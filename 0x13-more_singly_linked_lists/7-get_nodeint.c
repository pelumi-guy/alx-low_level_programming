#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * Description:
 * @head: Pointer to head node
 * @index: Index to be returned
 * Return: Index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (head);
}
