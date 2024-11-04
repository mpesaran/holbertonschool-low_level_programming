#include "main.h"

/**
 * print_chesssboard - prints a two dimension array
 * @a: an array of 8 elemets
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
