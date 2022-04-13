#include <stddef.h>
/**
 * int_index - Lookups the index of an element in an array
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to a function to validate if element matches
 * Return: Index of the first element which cmp doesn't return 0. Otherwise -1.
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	register size_t index;

	if (size < 1)
		return (-1);
	else if (!array || !cmp)
		return (-1);

	index = 0;

search:

	if (cmp(*(array + index)))
		return (index);
	else if (++index >= size)
		return (-1);
	goto search;
}
