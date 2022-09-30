#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; 1 < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (i);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
