#include <stddef.h>

/**
 * array_iterator - Executes a function on every single element in an array
 * @array: Array of integers
 * @size: Size of the array
 * @action: Pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!(array && action))
		return;

	while (size--)
		action(*(array++));
}
