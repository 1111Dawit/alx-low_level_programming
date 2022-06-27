#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - Free a two dimensional array of intigers
* @grid: The 2-dimensional array of intigers to be free
* @height: The height of grid.
*/
void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
