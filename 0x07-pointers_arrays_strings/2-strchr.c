#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String value
 * @c: Character value to be located
 * Return: First occurence of c, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
			i++;
		}
	}
	return ('\0');
}

