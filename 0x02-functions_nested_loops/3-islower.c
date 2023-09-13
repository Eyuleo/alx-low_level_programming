#include <stdio.h>
#include "main.h"
/**
 *  _islower - A function that checks for lowercase character
 *
 * 
 * Return: 1 if int c is lowercase, 0 if else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
