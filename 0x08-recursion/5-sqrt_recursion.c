#include "main.h"
/**
 * sqroot - return sqauer root of n
 * @n: integer input
 * @square: square n
 *
 * Return: squre if square = n or -1 if n > square
 */
int sqroot(int n, int square)
{
	if (square * square == n)
	{
		return (square);
	}
	if ((square * square) > n)
	{
		return (-1);
	}
	return (sqroot(n, square + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqroot(n, 0));
}
