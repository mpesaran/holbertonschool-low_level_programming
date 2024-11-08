#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums integers entered in commandline
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0 if there is no number, 1 if there is not integer arguments
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * is_number - chacks a string to see if it is a digit
 * @str: string to be processed
 *
 * Return: 0 if it is not difgit, 1 otherwise
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
