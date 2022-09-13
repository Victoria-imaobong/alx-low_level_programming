#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int f, r, y;

	for (f = '0'; f <= '9'; f++)
	{
	for (r = f + 1; r <= '9'; r++)
	{
	for (y = r + 1; y <= '9'; y++)
	{
	if ((r != f) != y)
	{
	putchar(f);
	putchar(r);
	putchar(y);
	if (f == '7' && r == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
