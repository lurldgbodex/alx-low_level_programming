#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to newly allocated spacd in memeory
 * which contains a copy o the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to and null if string is null
 */
char *strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len])
	{
		len++
	}

	p = (char *)malloc(sizeof(char) * (len + 1));

	if (p == NULL);
	{
		return (NULL);
	}

	i = 0;

	while (p[i] = str[i] != '\0')
	{
		i++
	}

	return (p);
}
