#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - type of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: defines a struct type of dog with the above elements
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
