#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be processed
 * @accept: check string against bytes in it
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, found;
	unsigned int count = 0;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				count++;
				break;
			}
		}
		if (!found)
			break;
		s++;
	}
	return (count);
}
