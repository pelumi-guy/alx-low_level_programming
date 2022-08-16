#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * Description:
 * @head: pointer to head node of list
 * Return: pointer to new head node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	nextNode = (*head)->next;
	(*head)->next = NULL;
	while (nextNode)
	{
		prevNode = *head;
		*head = nextNode;
		nextNode = (*head)->next;
		(*head)->next = prevNode;
	}
	return (*head);
}
