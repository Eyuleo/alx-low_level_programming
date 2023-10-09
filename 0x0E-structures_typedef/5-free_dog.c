#include "dog.h"
/**
 * free_dog -  frees dogs.
 * @d: struct pointer to typedef dog_t
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
