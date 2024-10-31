#include "main.h"

/**
 * *_strncat - concats to string until n bytes
 * @dest: resulting string
 * @src: the string to be copied
 * @n: the number of byted to be compied from src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';

	return (dest);
}
