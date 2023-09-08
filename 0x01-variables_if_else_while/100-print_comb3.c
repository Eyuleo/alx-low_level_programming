#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num, combnum;

	for (num = '0' ; num <= '9' ; num++)
	{
		for (combnum = num + 1 ; combnum <= '9' ; combnum++)
		{
			putchar(num);
			putchar(combnum);
			if (num == '8' && combnum == '9')
			continue;

			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
