#include"main.h"
#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 on success,if not 97, 98, 99 or 100
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written, close_status;
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;

    /* Check if the correct number of arguments was passed*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

    /* Open file_from for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

    /* Open file_to for writing (truncating if it already exists)*/
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

    /* Copy the content of file_from to file_to*/
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Write failed on file %s\n", argv[2]);
			exit(99);
		}
	}

    /* Check if there was an error during the read operation */
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Read failed on file %s\n", argv[1]);
		exit(98);
	}

    /* Close file descriptors*/
	close_status = close(fd_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	close_status = close(fd_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
