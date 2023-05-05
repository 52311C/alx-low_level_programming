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
	int j;

	j = 0;
	if (b == NULL || (*b != '0' && *b != '1'))
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		;
	}
	i--;
	while (i > 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		var = var + (b[i] - '0') * (1 << j);
		i--;
		j++;
	}
	return (var);
}
