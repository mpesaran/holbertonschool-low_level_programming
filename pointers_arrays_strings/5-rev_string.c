#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{

	char *end = s;
	
	while (*end != '\0')
	{
		end++
	}
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
