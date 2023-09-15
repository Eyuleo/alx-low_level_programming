#include "main.h"
/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int row = 0, num = 0;

	while (row < 10)
	{
		while (num < 15)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		num++;
			
		}
		row++;
		_putchar('\n');
	}
}
