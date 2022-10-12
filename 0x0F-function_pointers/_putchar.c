#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: character to be printed

 * Return: 1 on success 
 * -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
