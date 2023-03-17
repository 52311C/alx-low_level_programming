#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - code to be executed goes here
 * Description: Assigning a random number to n
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", last, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", last, n);
	}
	else if (n < 6  && n != 0)
	{

		printf("Last digit of %i is %i and is less than 6 and not 0\n", last, n);

	}
	return (0);
}
