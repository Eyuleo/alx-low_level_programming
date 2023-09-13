#include <stdio.h>
#include "main.h"
/**
* print_last_digit -a function that prints the last digit of a number
*
* @n: takes signed integer
*
* Return: The last digit
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
	last = (-1) * last;

	}

	_putchar(last + '0');
	return (last);
}
