#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: elements of the list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
