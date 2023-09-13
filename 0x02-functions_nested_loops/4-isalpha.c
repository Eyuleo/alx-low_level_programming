#include "main.h"
/**
 *  _isalpha - checks for lowercase character or uppercase
 *
 * @c: single letter input
 *
 * Return: 1 if int c is lowercase, 0 if else
 */

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
