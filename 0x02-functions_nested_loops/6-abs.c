#include <stdio.h>
#include "main.h"
/**
 * computes absolute value
 *
 * returns absolute value of integer
**/

int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else
	{
	int abs = (-1) * n;
	return (abs);
	}
}
