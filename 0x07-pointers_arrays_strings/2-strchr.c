#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: string pointer
 * @c: charcter
 *
 * Return: pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
