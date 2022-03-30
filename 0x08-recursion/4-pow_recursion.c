#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: base value to be raised in power
 * @y: value to rasied base in power
 *
 * Return: value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
