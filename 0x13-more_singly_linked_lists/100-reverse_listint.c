#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: pointer to node
 * Return: Pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first_node;
	listint_t *last_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	last_node = NULL;
	while ((*head)->next != NULL)
	{
		first_node = (*head)->next;
		(*head)->next = last_node;
		last_node = *head;
		*head = first_node;
	}
	(*head)->next = last_node;
	return (*head);
}
