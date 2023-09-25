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
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = true;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = false;
				break;
			}
		}
		if (bool == true)
			break;
	}
	return (i);
}
