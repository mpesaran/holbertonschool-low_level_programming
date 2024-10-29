#include "main.h"

/**
 * print_rev - prints a reverse string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(s[len - 1]);
		i--;
	}
	_putchar('\n');
}
