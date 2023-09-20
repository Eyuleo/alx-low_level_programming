#include "main.h"
/**
 * string_toupper - convert lowercase to upper case
 * @alpha: string pointer
 *
 * Return: uppercase string
 */
char *string_toupper(char *alpha)
{
	int i = 0;

	while (alpha[i] != '\0')
	{
		if (alpha[i] >= 'a' && alpha[i] <= 'z')
		{
			alpha[i] -= ('a' - 'A');
		}
		i++;
	}
	return alpha;
}
