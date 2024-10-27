#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 for 10 times
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
			for (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
