#include "main.h"

/**
* print_rev - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void print_rev(char *s)
{
	int i, len = 0;
	char c = '0';

	if (!(*s != '\0'))
	{
		while (c != '\0')
		{
			len++;
			c = *(s + len);
		}
		for (i = len - 1 ; i >= 0; i--)
		{
			_putchar(*(s + i));
		}
	}
	_putchar('\n');
}
