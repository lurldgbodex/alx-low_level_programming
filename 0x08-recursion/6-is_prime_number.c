#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - finds if n is an interger or not
 * @n: number to check
 *
 * Return: 1 if n is integer and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - recursively calculates if a number is prime number
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
