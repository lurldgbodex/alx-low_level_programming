#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: integer to check
 * Return: the value of last integer
 */
int print_last_digit(int r)
{
	int a;

	if (r < 0)
	{
		r = -r;
	}

	a = r % 10;

	if (a < 0)
	{
		a = -a;
	}

	_putchar(a + '0');

	return (a);
}
