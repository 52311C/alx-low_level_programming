#include <stdio.h>
#include <stdlib.h>
/**
 * main - Code entry
 * Description: Printing number combinations
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;
	/* your code goes there */
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
