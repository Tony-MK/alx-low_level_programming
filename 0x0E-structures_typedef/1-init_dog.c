#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a dog's attributes
 * @d: The dog's memory address
 * @name: The dog's name as a string
 * @age: The dog's age as an integer
 * @owner: The dog's owner's name as a a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
