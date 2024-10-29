#include "main.h"

/**
 * _strlen - Counts the length of string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
