#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * Description:
 * @head: pointer to head node
 * Return: pointer to newNode.
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;

	while (temp)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
