#include "main.h"

/**
 * _puts_recursion -  a function that prints a string
 * @s: String value
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s);
		_putchar(*s + 1);
	}
	else
		_putchar('\0');
}
