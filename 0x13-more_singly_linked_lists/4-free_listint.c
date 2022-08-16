#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * Description:
 * @head: pointer to head node
 * Return: pointer to newNode.
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while (temp)
	{
		free(temp);
		temp = temp->next;
	}
}
