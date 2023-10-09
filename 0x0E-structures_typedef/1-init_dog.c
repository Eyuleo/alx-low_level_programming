#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		strncpy(d->name, name, sizeof(d->name));
		d->name[sizeof(d->name) - 1] = '\0';
		d->age = age;
		strncpy(d->owner, owner, sizeof(d->owner));
		d->owner[sizeof(d->owner) - 1] = '\0';
	}
}
