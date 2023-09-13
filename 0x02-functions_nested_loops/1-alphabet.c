#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
**/
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
