#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - gets user inputs as args and returns result
 * @argc: number of arguments entered by user
 * @argv: array of args
 *
 * Return: 0 if sucessful
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Eroor\n");
		exit(100);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
