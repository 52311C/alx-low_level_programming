#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: bytes of memory
 * @b: constant byte
 * @n: pointer
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
