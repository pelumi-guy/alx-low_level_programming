#include "lists.h"

/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list.
 * Description:
 * @head: pointer to head node
 * @str: string content of new node
 * Return: pointer to newNode.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int len;

	newNode = malloc(sizeof(list_t));
	temp  = malloc(sizeof(list_t));

	if (newNode == NULL || temp == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	newNode->str = strdup(str);

	for (len = 0; str[len]; len++)
		;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
