#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string to be added to the first onr
 *
 * Return: a string
 */
char *str_concat(char *s1, char *s2)
{
	char *original2 = s2;
	char *original1 = s1;
	int len1 = 0;
	int len2 = 0;
	int i;
	char *conc;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		s1++;
		len1++;
	}
	while (*s2 != '\0')
	{
		s2++;
		len2++;
	}
	s2 = original2;
	s1 = original1;
	conc = malloc((len1 + len2 + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
		conc[i + len1] = s2[i];
	conc[len1 + len2] = '\0';
	return (conc);
}
