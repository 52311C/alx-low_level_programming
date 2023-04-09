#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if there are two arguments, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%i\n", result);
	return (0);
}
