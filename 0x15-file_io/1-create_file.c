#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - function that will create a new file
 * @filename: name of the file to create.
 * @text_content: text to add to the new file.
 *
 * Return: Always 1 on scucess, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int eror;
	int leng;
	int f;

	eror = leng = f = 0;
	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (f < 0)
			return (-1);
	while (text_content && text_content[leng])
		leng++;

	eror = write(f, text_content, leng);
	if (eror < 0)
		return (-1);
	close(f);
	return (1);
}
