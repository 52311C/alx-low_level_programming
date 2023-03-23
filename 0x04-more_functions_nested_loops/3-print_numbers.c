#include "main.h"

/**
 * print_numbers - code entry
 * Description: Print 0 - 9
 * Return:0
 */

void print_numbers(void)
{
	char q;

	while (q < 10)
	{
		_putchar(q);
		q++;
	}
	_putchar('\n');
}
