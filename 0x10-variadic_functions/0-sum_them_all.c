#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of all it parameters
 * @n: parameter value
 * Return: if n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list i;
	int sum = 0;
	unsigned int a;

	va_start(i, n);
	if (n != 0)
	{
		for (a = 0; a < n; a++)
		{
			sum = sum + va_arg(i, int);
		}
	}
	va_end(i);
	return (sum);
}

