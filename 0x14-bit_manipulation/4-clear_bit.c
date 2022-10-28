#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: input
 * @index: index
 * Return: 1 on success,
 * -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = 1 << index;

	if ((bits | *n) == *n)
		*n = *n ^ bits;

	return (1);
}
