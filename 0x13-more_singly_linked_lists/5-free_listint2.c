#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * Description:
 * @head: pointer to head node
 * Return: pointer to newNode.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (head == NULL)
		return;

	curr = *head;
	while ((temp = curr) != NULL)
	{
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
