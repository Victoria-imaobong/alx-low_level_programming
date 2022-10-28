#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);

	else
		return (0);
}
