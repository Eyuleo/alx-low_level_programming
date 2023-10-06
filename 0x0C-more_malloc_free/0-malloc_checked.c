#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int param
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
