#include "lists.h"

/**
 * list_len - Returns the number of elements in linked list_t list
 * @h: linked list
 * Return: Number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
