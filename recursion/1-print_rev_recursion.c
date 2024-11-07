#include "main.h"

/**
 * _print_rev_recursion - prints the string reversely using recursion
 * @s: string to be procesed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
