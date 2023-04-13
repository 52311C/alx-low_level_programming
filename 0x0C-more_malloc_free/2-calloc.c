#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Aloocates memory for an array
 * @nmeb: Number of array elemnts
 * @size: Bytes size of array
 * Return: Pointer to allocated memory, else NULL
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmeb == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmeb);
	if (ptr != NULL)
	{
		for (i = 0; i < (size * nmeb); i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
