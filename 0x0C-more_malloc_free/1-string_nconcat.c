#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concantenates two strings
 * @s1: First string value
 * @s2: Second string value
 * @n: number of bytes of s2
 * Return: Pointer to a newly allocated memory, else return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i;
	unsigned int j;

	i = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j]; j++)
	{
		i++;
	}
	c = malloc(sizeof(char) * (i + 1));
	if (c ==  NULL)
	{
		return (NULL);
	}
	i = 0;
	for  (j = 0; s1[j]; j++)
	{
		c[i++] = s1[j];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		c[i++] =  s2[j];
	}
	c[i] = '\0';
	return (c);
}
