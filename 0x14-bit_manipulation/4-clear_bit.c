#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: value to be set to 0
 * @index: index of the value
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, inverted_mask;

	if (index >= sizeof(*n) * 8)
		return (-1);
	mask = 1 << index;
	inverted_mask = ~mask;
	*n = *n & inverted_mask;

	return (1);
}
