#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: input
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 on success,
 * -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = 1 << index;

	*n = *n | bits;

	return (1);
}
