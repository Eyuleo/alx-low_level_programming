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

	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'a') && (*(str + i) <= 'z'))
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}

	return (str);
}
