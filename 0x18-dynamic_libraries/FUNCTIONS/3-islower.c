#include "main.h"

/**
 * _islower - defines if a characteer is lowercase
 * @c: the character to check
 * Return: 1 if c is lowercase and 0 if it is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
