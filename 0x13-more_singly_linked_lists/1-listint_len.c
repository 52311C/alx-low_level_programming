#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: elements of linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
