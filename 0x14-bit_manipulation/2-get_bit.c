#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: input
 * @index: index, starting from 0 of the bit to be gotten
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
