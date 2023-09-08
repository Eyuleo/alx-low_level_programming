#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num, combnum;

	for (num = 0 ; num <= 98 ; num++)
	{
		for (combnum = num + 1 ; combnum <= 99 ; combnum++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((combnum / 10) + '0');
			putchar((combnum % 10) + '0');
			if (num == 98 && combnum == 99)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
