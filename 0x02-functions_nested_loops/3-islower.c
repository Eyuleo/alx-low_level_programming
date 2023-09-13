#include <stdio.h>
#include "main.h"
/**
 * checks if c is lowercase or not
 *
 * return 1 if so 0 otherwise
 *
**/

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
