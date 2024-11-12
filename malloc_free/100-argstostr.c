#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - takes argumnets and concates tham in a string
 * @ac: number of arguments
 * @av: array of args
 *
 * Return: concatinated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0;
	int total_length = 0;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}
	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
