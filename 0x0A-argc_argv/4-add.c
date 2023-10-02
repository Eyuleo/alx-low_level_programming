#include <stdio.h>
#include <stdlib.h>
/**
 *_isdigit - checks if the input is digit
 * @str: input
 *
 * Return: 0 or 1
 */
int _isdigit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 0r 1
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;
	int value;

	if (argc >= 2)
	{
		for (; i < argc; i++)
		{
			if (!_isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			value = atoi(argv[i]);
			sum += value;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
