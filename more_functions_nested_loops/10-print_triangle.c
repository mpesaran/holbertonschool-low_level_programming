#include "main.h"

/**
 *print_triangle - print a triangle with # of size 
 *@size: triangle's size
 */
void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = i +1;
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
