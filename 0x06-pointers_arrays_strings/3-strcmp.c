#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * 
 * Return: -1 is string less than the other, 1 if greater than the other and 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			n = 1;
		}
		s1++;
		s2++;
	}

	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
