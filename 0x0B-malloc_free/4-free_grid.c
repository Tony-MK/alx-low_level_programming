#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - Releases memory for a vector array
 * @grid: Vector array
 * @height: Size of the first out of two dimesions
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(*(grid + height));
	free(grid);
}
