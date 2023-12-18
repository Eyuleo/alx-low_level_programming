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
	size_t file, bytes_read, bytes_written;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(file, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file);
	return (w);
}
