#include <stdio.h>
#include <stdlib.h>

/**
 * main - Code entry
 * Description: Print alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	/*code goes here*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
