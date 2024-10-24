#include "main.h"

/** 
 * add - adds two integer numbers
 *@a: an integer number
 *@b: second number to add
 *
 * Return: the added value
 */
int add(int a, int b)
{
	int result;

	result = a + b;
	if (result < 10)
	{
		_putchar('0' + result);
	}
	else
	{
		_putchar('0' + result / 10);
		_putchar('0' + result % 10);
	}
}
