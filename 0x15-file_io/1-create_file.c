#include"main.h"
/**
 * create_file - creates a new file with the given filename and writes the text
 * @filename: the name of the file to create
 * @text_content: the NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written, text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;
	}

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
	return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_desc, text_content, text_size);
		if (bytes_written != text_size)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
