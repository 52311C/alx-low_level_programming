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
	if (ch != 'e' && ch != 'q')
	{
		for (; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
	}
	return (0);

}
