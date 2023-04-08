#include "main.h"

/**
 * _strncat -  Concantenates two strings
 * @dest: String value
 * @src: String value
 * @n: Number of bytes
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int dest_len = 0;

	while (dest[a++])
		dest_len++;
	for (a = 0; src[a] && a < n; a++)
		dest[dest_len++] = src[a];
	return (dest);
}
