#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: Integr values
 * @size: matrix size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;


	for (; i < size; i++)
	{
		sum2 = sum2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
