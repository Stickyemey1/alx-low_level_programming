#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: Points to the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s) + 1);
}
