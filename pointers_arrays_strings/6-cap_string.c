#include "main.h"

/**
 * *cap_string - capitalize stating letter of each word
 * @c: the string to check
 *
 * Return: the formatted string
 */
char *cap_string(char *c)
{
	int i = 0;

	if (c[i] >= 'a' && c[i] <= 'z')
	{
		c[i] -= 32;
	}
	while (c[i] != '\0')
	{
		if ((c[i - 1] == ' ' || c[i - 1] == ',' || c[i - 1] == '!' ||
			c[i - 1] == '\n' || c[i - 1] == '\t' ||
			c[i - 1] == '.') && c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
