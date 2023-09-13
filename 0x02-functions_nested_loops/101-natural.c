#include <stdio.h>
/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int num,multiple;
	
	for (num = 1; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			multiple += num;
		}
	}
	printf("%d\n", multiple);
	return (0);
}
