#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * Description:
 * @head: pointer to head node
 * Return: pointer to newNode.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while ((temp = *head) != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
