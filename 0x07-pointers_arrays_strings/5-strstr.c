#include "main.h"
/**
 * _strstr - locates a substring
 *  @haystack: The string in which to search
 *  @needle: The substring to find
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;

		if (needle[j] == '\0')
			return (haystack + i);
	i++;
	}

	return (0);
}
