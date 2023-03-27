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
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = count - 1; j > 0; j--)
	{
		_putchar(s[j - 1]);
	}
	_putchar('\n');
}
