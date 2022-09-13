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
	int f, r;

	for (f = 0; f <= 98; f++)
	{
	for (r = f + 1; r <= 99; r++)
	{
	putchar((f / 10) + '0');
	putchar((f % 10) + '0');
	putchar(' ');
	putchar((r / 10) + '0');
	putchar((r % 10) + '0');
	if (f == 98 && r == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
