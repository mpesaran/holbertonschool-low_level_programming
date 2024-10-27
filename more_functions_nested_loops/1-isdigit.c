#include "main.h"

/**
 * _isdigit - check if the character is a singlr digit
 * @c: the character to be checked
 *
 * Return: 1 if is a single digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
