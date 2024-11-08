#include "main.h"
/**
 * main - prints arguments in each line
 * @argc: number of argument
 * @argv: array of arguments as string
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		_putchar('\n');
	}
	return (0);
}
