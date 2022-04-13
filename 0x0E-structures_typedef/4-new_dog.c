#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * string_length - Computes string length
 * @str: String
 * Retrun: The length of str as an unsigned long
 */
unsigned long string_length(char *str)
{
	register unsigned long len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return len;
}

/**
 * new_dog - Initializes dog struct
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The name of the dog owner
 * Return: A pointer to a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	register unsigned long name_len, owner_len = string_length(owner) + 1;
	dog_t *dog = malloc(sizeof(struct dog));

	if (dog == NULL)
		return (NULL);
	name_len = string_length(name) + 1;
	dog->name = malloc(name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	while (--name_len)
		*((*dog).name + name_len) = *(name + name_len);
	while (--owner_len)
		*(dog->owner + owner_len) = *(owner + owner_len);
	return (dog);
}
