#include "main.h"
/**
 * _calloc - Allocates memory for an array ising malloc
 * @nmemb: Number of member elements
 * @size: The number of bytes an member element requires
 * Return: Pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	nmemb *= size;
	if (nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);

	while (nmemb--)
		*(ptr + nmemb) = 0;

	return (ptr);
}
