#include "main.h"
/**
 * _memset -  fills memory with const byte
 * @s: pointer to the memory area to fill
 * @b: the constant byte
 * @n: the numbers of byte to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	if (n > 0)
	{
		for (; i < n; i++)
		{
			s[i] = b;
		}
	}	
	return (s);
}
