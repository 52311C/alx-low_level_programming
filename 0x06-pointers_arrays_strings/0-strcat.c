#include "main.h"

/**
 * _strcat - Concanntenate strings
 * @src: String value
 * @dest: String value
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] =  src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
