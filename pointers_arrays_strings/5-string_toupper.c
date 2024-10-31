#include "main.h"

/**
 * *string_toupper - changes all lowercase to uppercase
 * @s: string to be processed
 *
 * Return: Modified string
 */
char *string_toupper(char *s)
{
	*ptr = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (ptr);
}
