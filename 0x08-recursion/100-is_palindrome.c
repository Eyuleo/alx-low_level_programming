#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked
 *
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	if (s[0] == s[length - 1])
	{
		char newstr[strlen(s) - 1];
		int i = 0;

		while (i < strlen(s) - 1)
		{
			newstr[i - 1] = s[i];
			i++;
		}
		newstr[i - 1] = '\0';

		return (is_palindrome(newstr));
	}
	else
	{
		return (0);
	}
}
