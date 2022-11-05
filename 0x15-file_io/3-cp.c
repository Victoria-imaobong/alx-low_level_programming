#include "main.h"
void closer(int arg_files);
/**
 * main - a program that copies the content of a file to another file.
 * @argc: # of args
 * @argv: array pointer for args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, file_from_r, wr_err;
	char buf[1024];

	if (argc <F11>!= 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (file_from_r >= 1024)
	{
		file_from_r = read(file_from, buf, 1024);
		if (file_from_r == -1)
			dprintf(2, Error: Can't read from file
