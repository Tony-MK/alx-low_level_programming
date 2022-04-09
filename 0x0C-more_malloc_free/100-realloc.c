#include "main.h"
/**
 * _realloc - Allocates memory for an array ising malloc
 * @old_size: Number of member elements
 * @new_size: The number of bytes an member element requires
 * Return: Pointer to the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *blocks;

	if (new_size == old_size)
		return (*ptr);

	else if (new_size > old_size)
	{
		free(ptr);
		return malloc(new_size);
	}
	else if (ptr == NULL)
	{
		return malloc(new_size);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL)
	}
	
	blocks = malloc(new_size);
	if (blocks == NULL)
		return (blocks);

	while (--old_size)
		*(blocks + old_size) = *(ptr + old_size);
	
	free(ptr);
	return (blocks);
}
