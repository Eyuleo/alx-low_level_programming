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

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;
	new_str = malloc(((len1 + len2) + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(new_str, s1);
		i += len1;
	}
	if (s2 != NULL)
	{
		strcpy(new_str + i, s2);
	}
	return (new_str);
}
