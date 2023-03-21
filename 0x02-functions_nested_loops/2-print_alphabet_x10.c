#include "main.h"

/**
 * print_alphabet_x10 -  Code entry
 * Description: Print alphabet X10
 * Return:0
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i <= 10; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
	_putchar('\n');
}

