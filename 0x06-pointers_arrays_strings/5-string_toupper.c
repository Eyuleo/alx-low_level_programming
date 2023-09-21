#include "main.h"
/**
 * string_toupper - convert lowercase to upper case
 * @alpha: string pointer
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
