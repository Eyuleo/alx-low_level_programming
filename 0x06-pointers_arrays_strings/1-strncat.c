#include "main.h"
/**
 * _strncat - concatnate two strings
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes to concatnate from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}

	for (; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return dest;
}
