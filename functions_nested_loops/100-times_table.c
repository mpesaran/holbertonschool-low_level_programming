#include "main.h"

/**
 * print_times_table - print times table for numbers less than 15
 * @n: number of rows and cols
 *
 * Retuen: void
 */
void print_times_table(int n)
{
	int row = 0;
	int col = 0;
	int result;

	if ( n > 15 || n < 0)
		_putchar('0');

	while (row <= n)
	{
		while (col <= n)
		{
			result = col* row;

			if (col == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				if (result >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + result/100);
					_putchar('0' + (result % 100) / 10);
					_putchar('0' + (result % 100) % 10);
				}
				else if (result >= 10 && result <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
			}
			col++;
		}
		_putchar('\n');
		col = 0;
		row++;
	}
}
