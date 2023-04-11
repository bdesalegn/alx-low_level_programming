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
	if (filename == NULL)
	{
		return (0);
	}
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}
	char *buffer = (char *) malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	size_t bytes_read = fread(buffer, sizeof(char), letters, fp);

	if (bytes_read == 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (bytes_written);
}
