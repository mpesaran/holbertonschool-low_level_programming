#include "main.h"

/**
 * print_line - prints a line with underscore for n times
 * @n: number of underscore to draw a line
 */
void print_line(int n)
{
	while (n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
