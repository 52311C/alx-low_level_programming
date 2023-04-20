#include "variadic_functions.h"

/**
 * print_char - Function that prints char
 * @arg: Arguments list
 * Return: character being printed
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - Prints integers
 * @arg: Arguments list
 */

void print_int(va_list arg)
{
	int a;

	a = va_arg(arg, int);
	printf("%d", a);
}

/**
 * print_float - Prints float
 * @arg: Arguments list
 */

void print_float(va_list arg)
{
	float b;

	b = va_arg(arg, double);
	printf("%f", b);
}

/**
 * print_string - Prints string
 * @arg: Arguments list
 */

void print_string(va_list arg)
{
	char *d;

	d = va_arg(arg, char *);
	if (d == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", d);
}

/**
 * print_all - Prints anything
 * @format: list of all types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;
	int j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
	}
	while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
	{
		j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
