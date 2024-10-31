#include "main.h"

/**
 *_strcmp - compares two string
 *@s1: first string
 *@s2: second string
 *
 * Return: 15 if s1 comes before s2, -15 if s1 comes after s2, ote=herwise 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (13);
		}
		else if (*s1 < *s2)
		{
			return (-13);
		}
		s1++;
		s2++;
	}
	return (0);
}
