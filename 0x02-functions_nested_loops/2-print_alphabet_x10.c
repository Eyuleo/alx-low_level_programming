#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{	
	int i;

	for (i = 0 ; i < 10 ; i++)
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
