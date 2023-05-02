#include "lists.h"

/**
 * pop_listint - Delete head node of a list
 * @head: Pointer to node
 * Return: Head node's data (n), zero if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	del = *head;
	*head = (*head)->next;
	i = del->n;
	free(del);
	return (i);
}
