#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: alphabet in lowercase followed by a new line
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
