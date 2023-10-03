#include "main.h"
/**
 * free_grid - name
 * @grid: array from main
 * @height: int from main
 *
 * frees a 2d grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
