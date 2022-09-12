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
	int a;
	int n;

	for (a = '0'; a <= '8'; a++)
	{
	for (n = a + 1; n <= '9'; n++)
	{
	if (n != a)
	{
	putchar(a);
	putchar(n);
	if (a == '8' && n == '9')
	continue;
	        putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}	
	          
