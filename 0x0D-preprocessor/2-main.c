#include <stdio.h>

/**
 * main - code entry
 * Description: Prints the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
