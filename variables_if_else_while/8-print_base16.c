#include <stdio.h>

/**
 * main - This functions prints all the numbers of base 16
 *
 * Return: a string from 0 to 9 followed by a to f and a new line
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
