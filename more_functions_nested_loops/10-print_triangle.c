#include "main.h"

/**
 *print_triangle - print a triangle with # of size 
 *@size: triangle's size
 */
void print_triangle(int size)
{
	int i = 1;
	int j , k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			j = size - i;
			while (j--)
			{
				_putchar(' ');
			}
			k = i + j;
			while (k <= i)
			{
				_putchar(35);
			}
			i++;
			_putchar('\n');
		}
	}
}
