#include "main.h"
#include <stdlib.h>

/**
 * count_words - count the words in a string separating with space
 * @s: the string to be processed
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
/**
 * **strtow - split strings into words
 * @str: the string to be separated
 *
 * Return: null if string is empty or null, otherwise 0
 */
char **strtow(char *str)
{
	char **arr;
	int count, i, j, k, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = count_words(str);
	if (count == 0)
		return (NULL);
	arr = malloc((count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < count; j++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
			word_len++;
		arr[j] = malloc((word_len + 1) * sizeof(char));
		if (arr[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			arr[j][k] = str[i++];
		arr[j][k] = '\0';
	}
	arr[count] = '\0';
	return (arr);
}
