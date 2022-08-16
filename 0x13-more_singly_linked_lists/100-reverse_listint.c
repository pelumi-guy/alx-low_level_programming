#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * Description:
 * @head: pointer to head node of list
 * Return:
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	if (head == NULL)
		return (0);

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}
