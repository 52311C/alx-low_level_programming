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

	a = 0;
	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
