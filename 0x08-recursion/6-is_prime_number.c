#include "main.h"
/**
 * prime - checks if n is prime
 * @n: integer to be checked
 * @div: divisor
 *
 * Return: 1 if div = n 0 if n / div
 */
int prime(int n, int div)
{
	if (div == n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (prime(n, div + 1));
}
/**
 * is_prime_number - checks if n is prime
 * @n: integer to be checked
 *
 * Return: 1 id prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}
