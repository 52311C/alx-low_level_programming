#include <stdio.h>
#include <stdlib.h>

/**
 * main - Code entry
 *
 * Description: Print alphabet in upper and lowercase
 * Return: 0
 */

int main(void)
{
	char lc = 'a';
	char uc = 'A';

	/*Code goes here*/
	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	printf("\n");
	return (0);
}
