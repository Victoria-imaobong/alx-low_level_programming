#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 * @b: pointing to a stringi of 0 and 1 chars
 * Return: the converted number,
 * or 0 i there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cnv = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		cnv += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (cnv);

}
