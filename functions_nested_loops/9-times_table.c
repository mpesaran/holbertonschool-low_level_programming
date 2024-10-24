#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: void 
 */
void times_table(void)
{
	int num1 = 0;
	int num2 = 0;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			_putchar('0' + num1 * num2);
			_putchar(',');
			_putchar(' ');
			num2++;
		}
		_putchar('\n');
		num1++;
		num2 = 0;
	}
}
