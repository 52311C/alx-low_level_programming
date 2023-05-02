#include "lists.h"

/**
 * sum_listint - Sum of all data in a linked list
 * @head: pointer to node
 * Return: if empty return 0, else sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
