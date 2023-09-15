#include "main.h"
/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{

	if (n > 0)
	{
		int i = 0;

		for (; i < n; i++)
		{
			int j = 0;

			for (; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
