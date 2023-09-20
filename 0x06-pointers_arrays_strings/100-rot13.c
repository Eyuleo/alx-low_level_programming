#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int counter = 0;
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotated[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + counter) == alpha[i])
			{
				*(s + counter) = rotated[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}
