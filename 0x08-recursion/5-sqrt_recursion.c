#include "main.h"

int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find squar root
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - recurses to find the natural square root of n
 * @n: number to find sqare root of
 * @i: iterator
 *
 * Return: square root of n
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion(n, i + 1));
}
