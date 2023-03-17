#include <stdio.h>
#include <stdlib.h>

/**
 * main - Code entry
 * Description: Print lowercase alphabet without q and e
 * Return: 0
 */

int main(void)
{
	char ch;

	do {

		putchar(ch);
		ch++;
	} while (ch != 'e' && ch != 'q');
	return (0);

}
