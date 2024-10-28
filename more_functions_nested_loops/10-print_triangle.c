#include "main.h"

/**
 *
 */
void print_triangle(int size)
{
	int i = 1;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 1;
			while (size - j > 0)
			{
				_putchar(' ');
				j++;
			}
			_putchar(35);
			i++;
			_putchar('\n');
		}
	}
}
