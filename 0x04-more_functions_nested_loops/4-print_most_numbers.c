#Include "main.h"

/**
 * print_most_numbers - prints number from 0 - 9
 * except or 2 and 4
 * followed by a new line
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
