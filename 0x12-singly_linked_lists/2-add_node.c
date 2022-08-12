#include "lists.h"

/**
 * add_node - a function that adds a new
 * node at the beginning of a list_t list.
 * Description:
 * @head: pointer to head node
 * @str: string content of new node
 * Return: pointer to newNode.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	newNode->str = strdup(str);

	for (len = 0; str[len]; len++)
		;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
