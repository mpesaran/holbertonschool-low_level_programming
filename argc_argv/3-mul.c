#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies second and third argumants
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0 if successful, 1 if just there is one integer
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc == 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	print_number(result);
	_putchar('\n');
	return (0);
}
/**
 * print_number - prints numbers using _putchar
 * @n: number to print on screen
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
