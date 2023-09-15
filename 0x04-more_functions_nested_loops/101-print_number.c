#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n : integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}

	if (m > 9)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
