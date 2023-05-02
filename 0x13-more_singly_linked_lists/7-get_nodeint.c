#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node in a list
 * @head: pointer to node
 * @index: node index
 * Return: nth node of a list, NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
