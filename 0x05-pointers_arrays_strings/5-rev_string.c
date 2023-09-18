#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end = 0;
	char temp;

	if (s == NULL)
		return;

	while (s[len] != '\0')
	{	len++;
	}

	end = len - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		end--;
		start++;
	}

}
