#include "main.h"
/**
 * _strcmp - compares string
 * @s1: first string
 * @s2:second string
 *
 * Return: 0 if s1 and s2 are equal else otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
        int result = 0;

	while (result == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		result = *(s1 + i) - *(s2 + i);
		i++
	}
	return (result);
}

