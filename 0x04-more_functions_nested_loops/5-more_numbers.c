#include "main.h"

/**
 * more_numbers -  Print 0-14 X10
 *
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (b <= 10)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
		b++;
	}
}
