#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*free_grid- to free array
*@grid: two dimensional grid'
*@height: height dimesnion of the grid
*description: fucntion that frees a 2d grid made by alloc_grid f(x)
*return: nada
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
