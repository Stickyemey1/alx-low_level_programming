#include "main.h"

/**
 * factorial - A function that returnns the factorial of a given number
 * @n: an integer value to calculate thw factoria;
 *
 * Return: factorial
 */

int factorial(int n)
{
	int val = 1;

	if (val < 0)
	{
		return (-1);
	}
	if (val == 0)
	{
		return (1);
	}
	if (val != 1)
	{
		val = n * factorial(n - 1);
	}
	return (val);
}
