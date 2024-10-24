#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer number
 *
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n < 0 ? -1 * (n % 10) : (n % 10);
	_putchar('0' + last_digit);

	return (last_digit);
}
