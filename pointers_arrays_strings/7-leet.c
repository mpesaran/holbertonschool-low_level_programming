#include "main.h"

/**
 * *leet - encodes string into 1337
 *@s: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = replacements[j];
				break;
			}
		}
	}
	return (s);
}