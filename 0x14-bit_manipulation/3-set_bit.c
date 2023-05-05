#include "main.h"

/**
 * set_bit - sets the value of a given bit to 1 at a given index
 * @n: pointer to the number
 * @index: Index of the number
 * Return: 1 on success, -1 on failuer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (n == 0)
	{
		return (-1);
	}
	else if ((sizeof(unsigned long int) * 8) < index)
	{
		return (-1);
	}
	i = 1;
	i = i << index;
	*n = *n | i;
	return (1);
}
