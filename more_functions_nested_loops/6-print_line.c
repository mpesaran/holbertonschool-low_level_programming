#include "main.h"

/**
 * print_line - prints a line with underscore for n times
 * @n: number of underscore to draw a line
 */
void print_line(int n)
{
	if (n < 0)
	{
		_putchar('/n');
		break;
	}
	while (n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
