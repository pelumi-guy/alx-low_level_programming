#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list.
 * Description:
 * @head: head node of list to be printed
 * @n: value to be added to list
 * Return: Number of nodes.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	current = *head;
	if (*head == NULL)
	*head = new;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
