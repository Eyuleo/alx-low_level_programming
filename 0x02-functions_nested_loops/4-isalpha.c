#include "main.h"
/**
 *
 * main - checks if c is letter, uppercase or lowercase
 *
 * return 1 if 0 otherwise
**/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
