#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of char
 * @size: size of array to create
 * @c: char to initialize the arry
 *
 * Return: pointer to array if success and null if failure
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *)malloc(size * sizeof(char));

	i = 0;

	if (size == 0)
	{
		return ('\0');
	}

	if (p == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		*(p + 1) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
