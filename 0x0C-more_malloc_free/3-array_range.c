#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Minimum number
 * @max: Maximum number
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ptr[j] = i;
			j++;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
