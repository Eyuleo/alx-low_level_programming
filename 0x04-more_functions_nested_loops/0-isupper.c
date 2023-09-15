#include "main.h"
#include <stdio.h>
/**
 *_isupper - a function that checks if it's uppercase
 *
 * @c: takes a char
 *
 * Return: 1 if @c  is uppercase
*/
int _isupper(int c)
{
	char c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
