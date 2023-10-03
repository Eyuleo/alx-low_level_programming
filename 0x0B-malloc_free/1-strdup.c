#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string input
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int len, i = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
