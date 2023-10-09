#ifndef DOG_H
#define DOG_H
#include <stdio.h>
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
#endif
