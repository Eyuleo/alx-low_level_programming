#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number to be flipped
 * @m: the number you want to flip to
 *
 * Return:  the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_count = 0;
	unsigned long int result;

	result = n ^ m;

	while (result != 0)
	{
		if ((result & 1) == 1)
			bit_count++;
		result = result >> 1;
	}
	return (bit_count);
}
