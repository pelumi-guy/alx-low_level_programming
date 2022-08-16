#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * Description:
 * @head: pointer to head node's location
 * @index: index of node to be deleted
 * Return: pointer to newNode.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode, *nextNode, *temp = *head;
	unsigned int i;

	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
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
		prevNode->next = nextNode;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
