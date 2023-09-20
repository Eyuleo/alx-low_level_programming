#include "main.h"
/**
 * _strcat - concatnate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: the concatnated string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
        int j = 0;

	for(; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
