#include "main.h"

/**
 *print_triangle - print a triangle with # of size 
 *@size: triangle's size
 */
void print_triangle(int size)
{
	int i = 1;
	int hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			space = size - i;
			hash = i;

			while (space--)
			{
				_putchar(' ');
			}
			while (hash--)
			{
				_putchar(35);
			}
			i++;
			_putchar('\n');
		}
	}
}
