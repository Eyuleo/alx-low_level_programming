#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1, result = 1;
	int value;

	if (argc >= 2)
	{
		for (; i < argc; i++)
		{
			value = atoi(argv[i]);
			result *= value;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
