#include "main.h"
/**
 * cap_string - caplitalize words in a string
 * @str: string pointer
 *
 * Return: capitalize strin
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = ",;.!?(){}\n\t\" ";

	while (str[i] != '\0')
	{
		for (j = 0; separators[j] != 0; j++)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == separators[j]))
			{
				str[i] -= 32;
			}
			else
			{
				str[i] = str[i];
			}
		}
		i++;
	}
	return str;
}
