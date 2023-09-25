#include "main.h"
/**
 * _strspn - gets length of a prefix in a substring
 * @s: the main string to scan
 * @accept: the string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
		j++;
		}

		if (accept[j] == '\0')
		{
			break;
		}
	i++;
	}

	return (i);
}
