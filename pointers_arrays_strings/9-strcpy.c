#include "main.h"

/**
 * *_strcpy - copies the string from src to dest
 * @dest: pointer to the destination
 * @src: pointer to the sourse string
 *
 * Return: starting address of destination
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
