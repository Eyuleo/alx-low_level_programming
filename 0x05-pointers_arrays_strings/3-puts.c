#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 *
 * @str : string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
