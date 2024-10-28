#include "main.h"

/**
 * print_diagonal - print \ in a diagonal shape for n times
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int i= 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			while (i < n)
			{
				_putchar(' ');
				i++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
