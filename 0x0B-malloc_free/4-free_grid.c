#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: grid to free
 * @height: height ofv the grid
 * Return: VOID LMAOO
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;
i = 0;
while (i < height)
free(grid[i]);
free(grid);
i++;
}
