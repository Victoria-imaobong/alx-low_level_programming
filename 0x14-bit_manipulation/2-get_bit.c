#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: input
 * @index: index, starting from 0 of the bit to be gotten
 * Return: bits on success,
 * -1 on failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	if (index > 63)
		return (-1);


	bits = (n >> index) & 1;

	return (bits);
}
