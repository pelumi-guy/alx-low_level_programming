#include "lists.h"

/**
 * add_nodeint - a function that adds a new
 * nodeint at the beginning of a listint_t list.
 * Description:
 * @head: pointer to head nodeint
 * @n: integer content of new nodeint
 * Return: pointer to newNode.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
