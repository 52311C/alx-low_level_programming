#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 * Return: Size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	size_t b = 0;
	listint_t *tmp, *head, c;

	if (h == NULL)
	{
		return (0);
	}
	head = c = tmp = *h;
	while (head != NULL)
	{
		c = *h;
		b = 0;
		while (a > b)
		{
			if (tmp == c)
			{
				*h = NULL;
				return (a);
			}
			b++;
			c = c->next;
		}
		a++;
		tmp = head->next;
		free((void *)head);
		head = tmp;
	}
	*h = tmp;
	return (a);
}
