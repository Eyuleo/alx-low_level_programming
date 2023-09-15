#include "main.h"
/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
