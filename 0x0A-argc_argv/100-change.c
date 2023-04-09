#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum coins to make for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 if error occurs
 */

int main(int argc, char *argv[])
{
	int coin = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coin++;
		if ((cents - 25) >= 0)
		{cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coin);
	return (0);
}
