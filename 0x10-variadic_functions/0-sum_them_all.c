#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: int's to be summed
 *
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
		result += va_arg(args, int);
	va_end(args);

	return (result);
}
