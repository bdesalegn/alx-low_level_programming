#include"main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the NULL terminated string to add to the file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	return (1);

	while (text_content[text_size] != '\0')
	text_size++;

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	return (-1);

	bytes_written = write(file_descriptor, text_content, text_size);
	if (bytes_written != text_size)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
