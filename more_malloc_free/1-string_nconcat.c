#include "main.h"
#include <stdlib.h>
/**
 * cal_len - calculates length of string
 * @s: string to be processed
 *
 * Return: 0
 */
int cal_len(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * *string_nconcat - concates first string with n char of second string
 * @s1: first string
 * @s2: second string
 * @n: number of chars from second string
 *
 * Return: null if fails, otherwise string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = cal_len(s1);
	len2 = cal_len(s2);
	if (n > len2)
		n = len2;
	new_str = malloc((len1 + n + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = 0; i < n ; i++)
	{
		new_str[len1 + i] = s2[i];
	}
	new_str[len1 + n] = '\0';
	return (new_str);
}
