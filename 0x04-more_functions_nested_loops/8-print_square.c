#include "main.h"
/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
