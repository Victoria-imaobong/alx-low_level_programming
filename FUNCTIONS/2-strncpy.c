#include "main.h"

/**
 * _strncpy - copies two words
 * @dest: destination pointed at
 * @src: source pointer
 * @n: integer n
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
