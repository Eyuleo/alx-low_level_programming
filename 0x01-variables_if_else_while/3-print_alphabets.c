#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
**/
int main(void)
{
	char alpha, upalpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	for (upalpha = 'A' ; upalpha <= 'Z' ; upalpha++)
        {
                putchar(upalpha);
        }
		putchar('\n');

	return (0);
}
