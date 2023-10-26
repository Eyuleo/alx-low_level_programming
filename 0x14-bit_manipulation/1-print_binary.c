#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift;
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	shift = 1;
	while (shift < n)
		shift = shift << 1;
	while (shift > 0)
	{
		if ((n & shift) != 0)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
			putchar('0');
		shift = shift >> 1;
	}

}
