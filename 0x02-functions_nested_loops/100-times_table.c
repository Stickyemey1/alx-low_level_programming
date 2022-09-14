#include "main.h"

/**
 * print_times_table - prints the times table.
 * @n: input the times table (n x n).
 * Return: void
 */

void print_times_table(int n)
{
	int rows, columns, times;

	if (!(n > 15 || n < 0))
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				times = (rows * columns);
				if (columns != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (times < 10 && columns != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(times + '0');
				}
				else if (times >= 10 && times < 100)
				{
					_putchar(' ');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				else if (times >= 100 && columns != 0)
				{
					_putchar((times / 100) + '0');
					_putchar((times / 10) % 10 + '0');
					_putchar((times % 10) + '0');
				}
				else
				{
					_putchar(times + '0');
				}
			}
			_putchar('\n');
		}
	}
}
