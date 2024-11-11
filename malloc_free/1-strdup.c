#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - points to a newly allocated space in memory,contains str
 * @str: string to be copied
 *
 * Return: null if str is emty, otherwise pointer to new space
 */
char *_strdup(char *str)
{
	char *dup;
	char *original = str;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		len++;
		str++;
	}
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	str = original;
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
