#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: elements of linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_number = 0;

	while (h != NULL)
	{
		nodes_number++;
		h = h->next;
	}
	return (nodes_number);
}
