#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		putchar(48);
		for (j = 1; j <= 9; j++)
		{
			mul = i * j;
			putchar(44);
			putchar(32);
			if (mul <= 9)
			{
				putchar(32);
				putchar(mul + 48);
			}
			else
			{
				putchar((mul / 10) + 48);
				putchar((mul % 10) + 48);
			}
		}
		putchar('\n');
	}

}
