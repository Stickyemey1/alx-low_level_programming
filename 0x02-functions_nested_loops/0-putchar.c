#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar("\n");
	return (0);
}
