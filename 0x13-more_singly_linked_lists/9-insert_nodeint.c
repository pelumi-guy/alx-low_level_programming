#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * Description:
 * @head: pointer to head node's location
 * @n: integer content of new node
 * @idx: index of new node
 * Return: pointer to newNode.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *nextNode, *temp = *head;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

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
		nextNode = temp->next;
		temp->next = newNode;
		newNode->next = nextNode;
		return (newNode);
	}
	else
		return (NULL);
}
