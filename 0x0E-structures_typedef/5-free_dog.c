#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Releases dog struct from memory
 * @dog: Pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->owner != NULL)
			free(d->owner);
		if (d->name != NULL)
			free(d->name);
		free(d);
	}
}
