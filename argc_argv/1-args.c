#include "main.h"

/**
 * main - prints number of argumnets
 * @argc: number of arguments
 * @argv: string of arrays
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (*argv)
	{
		_putchar('0' + argc);
		_putchar('\n');
	}
	return (0);
}
