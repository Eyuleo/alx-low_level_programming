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
	char *ptr = (char *) &main;

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
	for (; i < num_bytes; i++)
		printf("%02x ", (unsigned char)ptr[i]);
	printf("\n");
	return (0);
}
