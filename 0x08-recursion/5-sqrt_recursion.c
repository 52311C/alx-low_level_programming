#include "main.h"

int sqrts(int n, int i);

/**
 * _sqrt_recursion - natural squareroot of a number
 * @n: The number
 * Return: -1 if n doesn't have a natural squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (n);
	}
	if (n == 1)
	{
		return (n);
	}
	return (sqrts(n, 0));
}

/**
 * sqrts - calculates square root of number
 * @i: number
 * @j: square
 * Return: square root
 */

int sqrts(int i, int j)
{
	if ((i * i) == j)
	{
		return (i);
	}
	if (j > (i / 2))
	{
		return (-1);
	}
	return (sqrts(i, j + 1));
}
