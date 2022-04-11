#include <stdlib.h>
#include <stdio.h>
/*
 * print_dog - Prints dog attributes
 * @dog: The dog's memory address
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		(d->name == NULL ? printf("(nil)") : printf("%s", d->name));

		printf("\nAge: %f", d->age);

		printf("\nOwner: ");
		(d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner));
	}
}
