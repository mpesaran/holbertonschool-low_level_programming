#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
