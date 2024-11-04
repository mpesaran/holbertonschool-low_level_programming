#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: the string to be processed
 * @needle: the substring to be located inside string
 *
 * Return: a pointer to the beginning of the located substring, null otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = needle;
		char *h = haystack;

		while (*h && *n && (*h == *n))
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
