#include <stdio.h>

/**
 * main - prints alphabets in lowercase followed by uppercase
 *
 * Return: a to z and A to Z followed by a new line
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
