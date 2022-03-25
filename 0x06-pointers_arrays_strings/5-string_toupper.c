#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: pointer to string
 *
 * Return: pointer to uppercase string
 */
char *string_toupper(char *x)
{
	int i = 0;
	char *upperstring;

	while (x[i] != '\0')
	{
		upperstring[i] = x[i] - 32;
		i++;
	}

	return (upperstring)
}
