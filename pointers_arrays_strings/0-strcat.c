#include "main.h"

/**
 * *_strcat - concates one string to another
 * @src: the string to be copied
 * @dest: final string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr !='\0')
	{
		ptr++;
	}
	while (*src == '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
