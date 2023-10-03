#include "main.h"
/**
 *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or concatnated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i = 0;
	char *new_str;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;
	new_str = malloc(((len1 + len2) + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
		{
			new_str[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (; s2[i] != '\0'; i++)
		{
			new_str[i + len1] = s2[i];
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
