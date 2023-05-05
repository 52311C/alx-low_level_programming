#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: binary value
 * Return: The converted number, 0 if there is more than one chars
 * in the string b is not 0 or 1, or if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		var <<= 1;
		var += b[i] - '0';
		i++;
	}
	return (var);
}
