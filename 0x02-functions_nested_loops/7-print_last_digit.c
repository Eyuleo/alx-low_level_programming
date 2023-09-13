#include <stdio.h>
#include "main.h"
/**
 * prints last digit of an integer
 *
 * return ast digit
**/
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
	last = (-1) * last;

	}

	_putchar(last + '0')
	return (last)
}
