#include "main.h"

/**
 * put_half - prints half a string
 * @str: String value:
 * Return: void
 */

void put_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
