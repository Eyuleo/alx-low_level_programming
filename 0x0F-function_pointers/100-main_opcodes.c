#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints op codes
 * @argc: arg count
 * @argv: arg pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i = 0;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}

	return (0);
}
