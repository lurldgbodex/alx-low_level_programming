#include "maain.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to return its factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
		break;
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
