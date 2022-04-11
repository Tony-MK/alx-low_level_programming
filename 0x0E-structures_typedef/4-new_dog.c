#include <stdio.h>
#include dog.h
/*
 * new_dog - I
 * @name:
 * @age:
 * @owner:
 * Return: A  
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = dog{malloc(sizeof(*name)), age, malloc(sizeof(*owner))};
char *ptr =  dog->name;

if (dog->name == NULL || dog->owner == NULL)
return (NULL);

*(dog->name + ((sizeof * name) - 1)) = '\0';
*(dog->name + ((sizeof * owner) - 1)) = '\0';

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

return (dog)
}
