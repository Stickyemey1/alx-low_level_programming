#include <unistd.h>
#include "_putchar"

/**
 * main - A program that prints _putchar, followed by a new line.
 *
 * Return: 0 On success.
 **/
int main(void)
{
	char *str;
	int i;

	str = "_putchar";
	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
