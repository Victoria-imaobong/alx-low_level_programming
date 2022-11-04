#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, 0_CREAT | 0_TRUNC | 0_WRONLY, 0600);
	if (file == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content = NULL)
	{
		close(file);
		return (-1);
	}
	else
	{
		write(file, text_content, i);
	}

	close(file);
	return (1);
}
