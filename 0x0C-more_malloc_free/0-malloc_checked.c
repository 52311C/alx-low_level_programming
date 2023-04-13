#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: Storage size to be allocated
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
