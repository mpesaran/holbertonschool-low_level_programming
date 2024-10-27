#include "main.h"

/**
 *
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		putchar('\n');
		i++;
	}
}
