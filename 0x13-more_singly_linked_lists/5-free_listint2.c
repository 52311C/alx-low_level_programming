#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *free_node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		free_node = *head;
		*head = (*head)->next;
		free(free_node);
	}
	head = NULL;
}
