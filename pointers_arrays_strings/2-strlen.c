#include "main.h"

/**
 * _strlen - Counts the length of string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
