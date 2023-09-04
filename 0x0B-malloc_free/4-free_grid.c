#include "main.h"
#include <stdlib.h>
/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 * Return: ...
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
