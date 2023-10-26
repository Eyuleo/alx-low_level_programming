#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int value
 * @index: index of the the value given
 *
 * Return: 1, 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);
	bit = n & (1 << index);
	if (bit != 0)
		return (1);
	return (0);
}
