#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix
 * @a: square matrix casted to integer pointer
 * @size: size of the square array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int sum_rev = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += *(a + (i * size) + j);
			}
			if (i + j == size - 1)
			{
				sum_rev += *(a + (i * size) + j);
			}
		}
	}
	printf("%d, %d\n", sum, sum_rev);
}
