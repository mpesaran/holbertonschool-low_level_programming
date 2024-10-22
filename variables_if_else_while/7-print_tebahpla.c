#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: A string of alphabet ztarts from z to a
*/
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
