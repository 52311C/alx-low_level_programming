#include "lists.h"

/**
 * add_nodeint - Adds new nodes at the beginning of a linked list
 * @head: Pointer to first node
 * @n: Data in the node
 * Return: Address of new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
