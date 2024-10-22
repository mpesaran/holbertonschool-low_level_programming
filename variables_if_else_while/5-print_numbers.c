#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Return: a string of single digit numbers followed by new line
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
