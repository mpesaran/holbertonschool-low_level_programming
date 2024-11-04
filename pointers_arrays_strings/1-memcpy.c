#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area to be copied
 * @dest: memory area to keep copies
 *@n: number of bytes to be copied
 *
 * Return: a pointer to the copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return (start);
}
