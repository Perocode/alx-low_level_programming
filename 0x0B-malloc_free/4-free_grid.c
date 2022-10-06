#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the previously created memory
 * @grid: double pointer to 2D array
 * @height: the element height
 * Return empty
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
