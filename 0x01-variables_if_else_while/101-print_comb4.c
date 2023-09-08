#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num, combnum, combnum2;

	for (num = '0' ; num <= '7' ; num++)
	{
		for (combnum = num + 1 ; combnum <= '8' ; combnum++)
		{
			for (combnum2 = combnum + 1 ; combnum2 <= '9' ; combnum2++)
			{
				putchar(num);
				putchar(combnum);
				putchar(combnum2);
			
			
				if (num == '7' && combnum == '8' && combnum2 == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
			
		}
	}
		putchar('\n');
	return (0);
}
