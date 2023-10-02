#include <stdio.h>
#include <stdlib.h>
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

	if (argc >= 1)
	{
		for (; i < argc; i++)
		{
			int value;

			value = atoi(argv[i]);
			if (value == 0 && *argv[i] != '\0')
			{
				printf("Error\n");
				return (1);
			}
			sum += value;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
