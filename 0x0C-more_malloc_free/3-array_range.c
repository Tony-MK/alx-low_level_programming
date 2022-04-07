#include "main.h"
/**
 * array_range - Allocates memory for an array of integers
 * @min: The lowest integer in the array
 * @max: The highest integer in the array
 * Return: Pointer to the integer array
 */
int *array_range(int min, int max)
{
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	while (max >= min)
	{
		*(array + (max - min)) = max;
		max--;
	}

	return (array);
}
