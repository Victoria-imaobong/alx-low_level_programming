#include "main.h"

/**
 * print_number - prints integers
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('_');
	}
	k /= 10;

	if (k != 0)
		print_number(k);

	_putchar((unsigned int) n % 10 + '0');


}
