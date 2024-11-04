#include "main.h"

/**
 * *_memset - fills n first bytes of string with b
 *@n: number of bytes
 *@b: constant byte
 *@s: the string to be replaced
 *
 * Return: a pointer to the meory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		n--;
		s++;
	}
	return (s);
}
