#include "lists.h"

/**
* add_dnodeint - a function that adds a new node at
* the beginning of a dlistint_t list.
* Description:
* @head: head node of list
* @n: value to be added to list
* Return: 0
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
