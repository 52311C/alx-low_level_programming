#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer  to the number
 * @index: INdex of the number
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned  long int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	if (*n & i)
	{
		*n ^= i;
	}
	return (1);
}
