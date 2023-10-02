#include <stdio.h>
/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int sum_args;

	sum_args = argc - 1;
	(void) argv;

	printf("%d\n", sum_args);
	return (0);
}
