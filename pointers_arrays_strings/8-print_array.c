#include "main.h"
#include <stdio.h>
  
/**
 * print_array - print the first n numbers in array
 * @a: the array to be processed
 * @n: number of elements of array to be printed
 */
void print_array(int *a, int n)
{
	int *end = a + n;
	int *ptr = a;

	for (*ptr = a; ptr < end; ptr++)
	{
		printf("%d", *ptr);
		if (ptr + 1 < end)
			printf(" ,");

	}
	printf("\n");
}
