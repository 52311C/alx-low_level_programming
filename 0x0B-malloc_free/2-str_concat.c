#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concantenates two strings
 * @s1: first string value
 * @s2: Second string value
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int a;
	int b = 0;
	int c = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] || s2[a]; a++)
	{
		c++;
	}
	concat = malloc(sizeof(char) * c);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a]; a++)
	{
		concat[b++] = s1[a];
	}
	for (a = 0; s2[a]; a++)
	{
		concat[b++] = s2[a];
	}
	return (concat);
}
