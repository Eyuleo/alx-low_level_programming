#include <stdio.h>
#include "main.h"
/**
 * multiples of 9
 *
 * return multiple table
**/
void times_table(void)
{
	int i, j, result;
	
	for (i = 0; i <= 9; i++)
	{
		putchar('0');
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			putchar(',');
			putchar(' ');
			if (result <= 9)
			{
				putchar(' ');
				putchar(result + '0');
			}
			else
			{
				putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		putchar('\n');
	}
}
