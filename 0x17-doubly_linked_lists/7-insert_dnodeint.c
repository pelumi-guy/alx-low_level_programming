#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new
 * node at a given position.
 * Description:
 * @head: pointer to head node's location
 * @n: integer content of new node
 * @idx: index of new node
 * Return: pointer to newNode.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *newNode, *nextNode, *temp = *head;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; temp != NULL && i < (idx - 1); i++)
		temp = temp->next;

	if (temp)
	{
		newNode->prev = temp;
		nextNode = temp->next;
		temp->next = newNode;
		newNode->next = nextNode;
		if (nextNode)
			nextNode->prev = newNode;
		return (newNode);
	}
	else
		return (NULL);
}
