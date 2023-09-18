#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: - points to a string type
 *
 * Return: nothing
*/
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		puts(str[i]);
	}
	puts('\n');
}
