#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes to concat
 *
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, total;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	total = len1 + n + 1;
	new_str = (char *)malloc(total);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strncat(new_str, s2, n);
	return (new_str);
}
