#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list,
 * and returns the head node’s data (n)
 * Description:
 * @head: pointer to head nodeint
 * Return: data (n) of popped head node.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (*head == NULL || head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
