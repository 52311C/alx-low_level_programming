#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of list_t list
 * @head: Head of list
 * @str: String value
 * Return: Address of the new element, NULL of failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *old_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
	{
	}
	new_node->len = i;
	new_node->next = NULL;
	old_node = *head;
	if (old_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (old_node->next != NULL)
		{
			old_node = old_node->next;
		}
		old_node->next = new_node;
	}
	return (*head);
}
