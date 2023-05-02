#include "lists.h"

/**
 * pop_listint - Delete head node of a list
 * @head: Pointer to node
 * Return: Head node's data (n), zero if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int n;

	if (*head != NULL)
	{
		del = *head;
		del = (*head)->next;
		n = del->n;
		free(del);
		return (n);
	}
	return (0);
}
