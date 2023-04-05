#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string value
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_print_rev_recursion(s);
		_putchar(*s);
	}
	_putchar('\n');
}
