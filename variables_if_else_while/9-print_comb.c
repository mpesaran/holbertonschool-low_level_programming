#include <stdio.h>

/**
 * main - Prints numbers in ascending order
 *
 * Return: numbers in ascending order seperated with space and comma
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
