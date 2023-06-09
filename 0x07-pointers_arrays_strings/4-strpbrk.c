#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: String value
 * @accept: String value for searching in
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
