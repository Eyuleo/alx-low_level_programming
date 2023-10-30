#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters:  the number of letters it should read and print
 *
 * Return: 0, NULL or number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer;
	size_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	buffer[letters + 1];
	bytes_read = fread(buffer, 1, letters, file);
	buffer[bytes_read] = '\0';

	if (ferror(file))
	{
		fclose(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != bytes_read)
	{
		fclose(file);
		return (0);
	}
	fclose(file);
	return (bytes_read);
}
