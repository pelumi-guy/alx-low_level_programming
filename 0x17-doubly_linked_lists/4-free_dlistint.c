#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * Description:
 * @head: pointer to head node
 * Return: pointer to newNode.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
