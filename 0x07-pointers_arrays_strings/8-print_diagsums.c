#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1) - (i + 1))];
	}

	printf("%d, %d\n", sum, sum1);
}
