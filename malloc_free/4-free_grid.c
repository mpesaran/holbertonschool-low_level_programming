#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memoray allocated to a 2d array
 * @grid: pointer to the 2d array
 * @height: number of rows in 2d array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
