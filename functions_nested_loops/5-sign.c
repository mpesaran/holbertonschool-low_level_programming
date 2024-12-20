#include "main.h"

/**
 * print_sign - checks if the number is positive, negative or zero
 * @n: the number to check the sign
 *
 * Return: 1 if n is positive, -1 if n is ngative, 0 if n is 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
