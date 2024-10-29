#include "main.h"

/**
 * print_rev - prints a reverse string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;
	int len = _strlen(s)

	while (s[i] != '\0')
	{
		_putchar(s[len - i]);
		i++;
	}
}
