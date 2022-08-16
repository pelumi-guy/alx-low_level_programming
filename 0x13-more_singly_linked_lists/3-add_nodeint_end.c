#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new
 * node at the end of a listint_t list.
 * Description:
 * @head: pointer to head node
 * @n: integer content of new node
 * Return: pointer to newNode.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
