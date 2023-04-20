#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int a;

	va_start(i, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(i, int));
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(i);
}
