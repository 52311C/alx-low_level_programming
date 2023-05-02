#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to node
 * @idx: index of the list where new node should be added
 * @n: data
 * Return: address of new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *inst;
	listint_t *i;
	unsigned int node;

	i = *head;
	inst = malloc(sizeof(listint_t));
	if (inst == NULL)
	{
		return (NULL);
	}
	inst->n = n;
	if (idx == 0)
	{
		inst->next = *head;
		*head = inst;
		return (inst);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (i == NULL || i->next == NULL)
		{
			return (NULL);
		}
		i = i->next;
	}
	inst->next = i->next;
	i->next = inst;
	return (inst);
}
