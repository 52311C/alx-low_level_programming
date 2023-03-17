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

	ch = 'a';
	do {

		putchar(ch);
		ch++;
		if (ch == 'e')
		{
			continue;
		}
		else if (ch == 'q')
		{
			continue;
		}
	} while (ch <= 'z');

	putchar(ch);
	ch++;

	return (0);

}
