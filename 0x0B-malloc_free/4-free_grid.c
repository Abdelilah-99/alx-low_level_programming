#include "main.h"
/**
 * free_grid - hna b7aal ilaa l9iina chii merrat chii fail
 * w kaan andna 2D bach nvidiw la memoire
 * @grid: 2d array
 * @height: row
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
