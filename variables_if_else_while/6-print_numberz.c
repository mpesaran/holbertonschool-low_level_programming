#include <stdio.h>

/**
 * main - Prints numbers 0 to 9
 *
 * Return: A string of single digit numbers base 10
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
