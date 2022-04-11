#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Releases dog struct from memory
 * @dog: Pointer to dog
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
