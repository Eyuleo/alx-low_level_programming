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
	int j = 0;
	char *temp;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			temp = &s[i];
			j = 1;
			break;
		}
	}
	if (j == 0)
	{
		temp = '\0';
	}
	return (temp);
}
