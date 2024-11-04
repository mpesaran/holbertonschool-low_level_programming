#include "main.h"

/**
 * *_strchr - locates a character in a string
 *@s: the string to be processed
 *@c: the character to be serached for
 *
 * Return: a pinter to the first occuence of the character, null if is not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s != c)
		return ('\0');
	return (s);
}
