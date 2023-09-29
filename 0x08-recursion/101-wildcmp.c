#include "main.h"
/**
 * wildcmp - return 1 if s1 is idnetical to s2 0 if not
 * @s1: the string to be compared
 * @s2: string that is being compared with s1
 *
 * Return: 1 0r 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
