#include "main.h"
/**
 * leet - encodes string to 1337
 * @s: string
 *
 * Return: 1337 encoded string
 */
char *leet(char *s)
{
	int i = 0;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		int j = 0;

		while (letters[j] != '\0')
		{
			if (letters[j] == s[i]|| letters[j] == s[i] + 32)
			{
				s[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}

	return s;
}
