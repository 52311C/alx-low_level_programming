#include "main.h"

/**
 * print_numbers - code entry
 * Description: Print 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	char q;

	while (q <= 9)
	{
		_putchar(q);
		q++;
	}
	_putchar('\n');
}
