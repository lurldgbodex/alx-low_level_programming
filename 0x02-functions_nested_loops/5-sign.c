#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: character to check
 * Return: 1 if n is greater than 0,
 * 0 i n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
