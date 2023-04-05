#include "main.h"

int prime(int i, int j);

/**
 * is_prime_number - checks for a prime number
 * @n: Integer value:
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (prime(n, 2));
}

/**
 * prime - checks for prime numbers
 * @i: value to be checked
 * @j: value to check with
 * Return: 0 if divisible, 1 otherwise
 */

int prime(int i, int j)
{
	if ((i % j) == 0)
	{
		return (0);
	}
	if (j == (i / 2))
	{
		return (1);
	}
	return (prime(i, j + 1));
}
