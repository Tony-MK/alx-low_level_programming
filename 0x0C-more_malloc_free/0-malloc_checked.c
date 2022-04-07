#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);
	
	if (m != NULL)
		return (m);
	exit(98);
}
