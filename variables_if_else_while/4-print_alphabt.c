#include <stdio.h>

/**
 * main - This function prints alphabet in lowercase except q and e
 *
 * Return: a string of alphabets except e and q
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
