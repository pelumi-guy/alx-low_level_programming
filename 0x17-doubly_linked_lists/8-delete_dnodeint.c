#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index index of a dlistint_t linked list.
 * Description:
 * @head: pointer to head node's location
 * @index: index of node to be deleted
 * Return: pointer to newNode.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevNode, *nextNode, *temp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		else
			return (-1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prevNode = temp;
		temp = temp->next;
	}

	if (temp)
	{
		nextNode = temp->next;
		nextNode->prev = prevNode;
		prevNode->next = nextNode;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
