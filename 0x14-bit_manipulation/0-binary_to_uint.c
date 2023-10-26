#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary pointer
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, result = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result += 1 << (len - 1 - i);
		}
		else if (b[i] != '0')
			return (0);
	}
	return (result);
}
