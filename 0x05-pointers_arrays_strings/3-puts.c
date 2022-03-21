#include "main.h"

/**
 * _puts - prints a strings, followed by a new line to stdout
 * @str: pointer to string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_puts(i);
	}
	_putchar('\n');
}
