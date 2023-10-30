#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 d array we just created
 * @grid: 2 d array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
