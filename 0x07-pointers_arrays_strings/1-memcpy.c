#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: numbers of bytes to copy from src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
