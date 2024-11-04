#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set to be found in string
 *
 * Return: pointer to the bytes is s if there is any, otherwise 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int found = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				return (s);
			}
		}
		s++;
	}
	if (!found)
		return ('\0');
	return (s);
}
