#include "main.h"

/**
 * print_numbers - printthe number 0 to 9 
 * followed by a new line
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
