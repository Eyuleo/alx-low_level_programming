/**
 * _strncpy - copy at most n chars from src to dest
 * @src: source string
 * @dest: destination string
 * @n: max no of chars to copy from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
