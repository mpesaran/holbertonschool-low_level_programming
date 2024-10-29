#include "main.h"

/**
 *puts_half - print second half of a string
 *@str: string to be processed
 */
void puts_half(char *str)
{
	int len = 0;
	char *start = str;

	while (*start != '\0')
	{
		len++;
		start++;
	}
	start = str + ((len + 1) / 2);
	while (*start != '\0')
	{
		_putchar(*start);
		start++;
	}
	_putchar('\n');
}
