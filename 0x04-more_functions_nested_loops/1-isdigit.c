#include "main.h"

/**
 * _is digit - checks for a digit
 * @c: characterer to check
 * Return: 1 if c is a digit,  0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
