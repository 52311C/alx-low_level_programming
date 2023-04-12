#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initialises it with a special char
 * @size: size of array
 * @c: Initialises the array
 * Return: Pointer to array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
