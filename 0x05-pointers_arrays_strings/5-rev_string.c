#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;

	int len, start, end = 0;
	char temp;

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
