#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Initializes dog struct
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The name of the dog owner
 * Return: A pointer to a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	char *ptr;

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(*name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(*owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	*(dog->name + (sizeof(*name) - 1)) = '\0';
	*(dog->owner + (sizeof(*owner) - 1)) = '\0';
	dog->age = age;
	ptr = dog->name;
	while (*name != '\0')
	{
		*ptr = *name;
		ptr++;
		name++;
	}
	ptr = dog->owner;
	while (*owner != '\0')
	{
		*ptr = *owner;
		ptr++;
		owner++;
	}
	return (dog);
}
