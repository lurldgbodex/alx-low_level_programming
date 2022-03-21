#include "main.h"

/**
 * int _strlen - returns the lenght of a string
 * @s: string
 *
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
