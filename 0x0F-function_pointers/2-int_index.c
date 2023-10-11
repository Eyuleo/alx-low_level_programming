#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: list of integers to be searched
 * @size: number of elements in the array
 * @cmp: function pointer
 *
 * Return: index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		result = cmp(array[i]);
		if (result == 0)
		{
			return (i);
		}
	}
	return (-1);
}
