#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of a linked list
 * @head: pointer to node
 * @index: node index that should be deleted
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del;
	listint_t *i;
	unsigned int node;

	i = *head;
	if (i == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(i);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (i->next == NULL)
		{
			return (-1);
		}
		i = i->next;
	}
	del = i->next;
	i->next = del->next;
	free(del);
	return (1);
}
