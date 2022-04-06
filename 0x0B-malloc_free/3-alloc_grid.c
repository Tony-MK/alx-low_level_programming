#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - Initializes an array with a specific char
 * @width: The size of the array
 * @height: Character to initialize with
 * Return: A pionter to a char. Otherwise, NULL
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;

	if (width <= 0 || height <= 0)
		return (array);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (array);
set:
	height--;
	*(array + height) = malloc(sizeof(int) * width);
	if (*(array + height) == NULL)
		return (NULL);
	else if (height == 0)
		return (array);
	goto set;
}
