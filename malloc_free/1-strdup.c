#include "main.h"
#include <stdlib.h>

/**
 *
 */
char *_strdup(char *str)
{
	char *dup;
	char *original = str;
	int len, i;

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
