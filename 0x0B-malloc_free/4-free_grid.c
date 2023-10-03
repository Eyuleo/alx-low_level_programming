#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to pointer
 * @height: row of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
