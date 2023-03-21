#include "main.h"

/**
 * print_alphabet_x10 -  Code entry
 * Description: Print alphabet X10
 * Return:0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}

