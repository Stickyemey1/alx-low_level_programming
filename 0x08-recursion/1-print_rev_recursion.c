#include "main.h"
/**
 * _prints_rev_recursion - A function to print a string in reverse
 * @s: input
 * Return: string
 */

void prints_rev_recursion(char *s)
{
	if (*s !== '\0')
	{
		_putchar(*s);
		return;
	}
	_putchar('\n');
	_prints_rev_reccursion(s + 1);
}
