#include "main.h"

/**
 *
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (*s);
}
