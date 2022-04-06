#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by allox_grid
 * @grid: pointer to pointer
 * @height: height of grid
 */
void free_grid(int **grid, int hwight)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
