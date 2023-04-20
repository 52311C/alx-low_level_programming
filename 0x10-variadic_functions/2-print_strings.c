#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: String to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int a;
	char *c;

	va_start(i, n);
	for (a = 0; a < n; a++)
	{
		c = va_arg(i, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(i);
}
