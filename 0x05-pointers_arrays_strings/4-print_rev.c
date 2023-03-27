#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: String value
 * Return: void
 */

void print_rev(char *s)
{
	int count;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
