#include "main.h"
/**
 * argstostr - conactnates arg of aprogram
 * @ac: arg count
 * @av: arg vector pointer 2 pointer
 *
 * Return: Pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0, i = 0, pos = 0;
	long unsigned int j = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	total_len += 1;
	new_str = malloc(total_len * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			new_str[pos] = av[i][j];
			pos++;
		}
		new_str[pos] = '\n';
		pos++;
	}
	new_str[pos] = '\0';
	return (new_str);
}
