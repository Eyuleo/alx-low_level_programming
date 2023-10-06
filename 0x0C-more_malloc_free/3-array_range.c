#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: min range
 * @max: max range
 *
 * Return: pointer to new array or NULL
 */
int *array_range(int min, int max)
{
	int *new_array;
	int i = 0;

	if (min > max)
		return (NULL);
	new_array = malloc((max - min + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);
	for (; i <= max - min; i++)
		new_array[i] = min + i;
	return (new_array);
}
