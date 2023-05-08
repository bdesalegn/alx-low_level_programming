#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard outpu
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open;
	int read_file, write_file;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
	{
		free(buffer);
		return (0);
	}
	read_file = read(file_open, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(file_open);
		return (0);
	}

	write_file = write(STDOUT_FILENO, buffer, read_file);

	free(buffer);
	close(file_open);
	if (write_file != read_file)
		return (0);
	return (read_file);
}
