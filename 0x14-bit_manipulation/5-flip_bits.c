#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be flipped
 * to get from one number to another
 * @n: The first number
 * @m: second number
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			bits++;
		}
	}
	return (bits);
}
