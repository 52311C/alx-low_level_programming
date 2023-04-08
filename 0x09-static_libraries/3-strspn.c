#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: String value
 * @accept: prefix substring
 * Return: number of bytes on the initial segment of s,
 * which consisttts only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
