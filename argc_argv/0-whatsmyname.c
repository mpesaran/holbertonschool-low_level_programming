#include "main.h"
/**
 * main - prints function name
 * @argc: number of arguments
 * @argv: array of string
 *
 * Return: 0 if it was successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (argv[0][i])
		{
			_putchar(argv[0][i]);
			i++;
		}
	}
	_putchar('\n');
	return (0);
}
