#include <stdio.h>
#include <stdlib.h>

/**
 * main - Code entry
 * Description: printing digits of base from 0
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
