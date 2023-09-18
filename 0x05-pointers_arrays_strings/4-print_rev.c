/**
 * print_rev - print string in reverse order
 *
 * @s: string
 * Return: nothing
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - i; i >= 0; i--)
	{
		_puthcar(s[i]);
	}
	_putchar('\n');
}
