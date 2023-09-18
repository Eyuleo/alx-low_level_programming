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
	int i;

	for (i = len - i; i >= 0; i--)
	{
		write(1, s[i], 1);
	}
	write(1, "\n", 1);
}
