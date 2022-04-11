#ifndef __DOG_H__
#define __DOG_H__
/**
 * struct dog - A struct for a dog
 * @name: String
 * @age: Float
 * @owner: String
 */
struct dog
{
	char *owner;
	char *name;
	float age;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
