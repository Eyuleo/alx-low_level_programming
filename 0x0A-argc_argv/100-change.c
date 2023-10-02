#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry of the program
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents;
	int num_coins = 0;
	int num, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents> 0)
	{
		if (cents >= coins[i])
		{
			num = cents / coins[i];
			num_coins += num;
			cents -= num * coins[i];
		}
		i++;
	}
	printf("%d\n", num_coins);
	return (0);
}
