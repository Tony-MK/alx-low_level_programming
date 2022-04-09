#include "main.h"
/**
 * _calloc - Allocates memory for an array ising malloc
 * @nmemb: Number of member elements
 * @size: The number of bytes an member element requires
 * Return: Pointer to the array
 */
void *realloc(void *ptr, unsigned int old_size, unsigned int new_size)
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

	return (ptr);
}
