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
		_puts_recursion(s + 1);
		_putchar(*s);
		_putchar('\n');
	}
}
