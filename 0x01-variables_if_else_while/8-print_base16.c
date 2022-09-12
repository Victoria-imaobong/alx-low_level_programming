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
	int num;
	char low;
	{
	for (num = '0'; num <= '9'; num++)
	putchar(num);
	}

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
        putchar('\n');
	return (0);
}
