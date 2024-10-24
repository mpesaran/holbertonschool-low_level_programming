#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number until reaches 98
 * @n: given number to start from
 *
 * Return: void
*/
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if ( n == 98)
			{
				printf("%d\n", n);
			}
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			printf("%d, ", n);
			n--;
		}
	}
}
