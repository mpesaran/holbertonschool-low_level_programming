#include "main.h"

/**
 * *_strncpy - Copies a string to another until reaches n
 * @src: the string to be copied to
 * @dest: the string to be copied on
 * @n: number of bytes to be copied
 *
 * Return: resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++,
		n--;
	}
	return (dest);
}
