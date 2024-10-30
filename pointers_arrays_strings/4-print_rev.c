#include "main.h"

/**
 * print_rev - prints a reverse string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
