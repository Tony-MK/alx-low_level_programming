#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Initializes an array with a specific char
 * @size: The size of the array
 * @c: Character to initialize with
 * Return: A pionter to a char. Otherwise, NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;

	if (size == 0)
		return (array);
	array = malloc(size);
set:
	size--;
	*(array + size) =  c;
	if (size > 0)
		goto set;
	return (array);
}
