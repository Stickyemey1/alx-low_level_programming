#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int a, b;

	for (a = '0' ; a <= '6' ; )
	{
		for (b = '0' ; b <= '7' ; )
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (!(a == '6' && b == '7'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
