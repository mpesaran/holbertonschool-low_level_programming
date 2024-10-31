#include "main.h"

/**
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src ='\0' && n > 0)
	{
		ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
