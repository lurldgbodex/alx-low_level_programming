#include "main.h"

/**
 * print_most_numbers - prints number from 0 - 9 
 * except or 2 and 4
 * followed by a new line
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 52 && n != 50)
		{
			_putchar(n);
		}
	}

	_putchar('\n');
}
