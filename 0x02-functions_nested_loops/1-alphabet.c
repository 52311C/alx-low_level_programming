#include "main.h"

/**
 * main - Code entry
 * function print_alphabet: Print alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
}

