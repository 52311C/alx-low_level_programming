#include "lists.h"

/**
 * add_node - Adds new node at beginning of list_t list
 * @head: Head of linked list
 * @str: String to store
 * Return: Address of new element, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *another_node;
	size_t i;

	another_node = malloc(sizeof(list_t));
	if (another_node == NULL)
	{
		return (NULL);
	}
	another_node->str = strdup(str);
	for (i = 0; str[i]; i++)
	{
	}
	another_node->len = i;
	another_node->next = *head;
	*head = another_node;
	return (*head);
}
