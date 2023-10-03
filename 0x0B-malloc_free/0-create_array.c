#include "main.h"
/**
 * create_array - of chars and init it with specific char
 * @size: memory size to allocate
 * @c: char to init
 *
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
