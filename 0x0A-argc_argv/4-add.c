#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < '0' && atoi(argv[i]) > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
