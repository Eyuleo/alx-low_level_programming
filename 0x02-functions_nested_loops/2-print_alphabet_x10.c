#include <stdio.h>
#include "main.h"
/**
 * main-Entry point.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	for (int i = 0 ; i <= 10 ; i++)
	{
		char alpha = 'a';
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
	}
}
