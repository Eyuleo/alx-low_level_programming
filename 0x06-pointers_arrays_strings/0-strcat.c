/**
 * _strcat - concatnate two strings
 * @dest: first string
 * @src: second string
 *
 * Return: the concatnated string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = strlen(dest);

	for(; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
