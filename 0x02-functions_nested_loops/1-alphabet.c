#include <stdio.h>
void print_alphabet(void);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
**/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
