#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the new concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, size, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;

	while (s1[len1])
	{
		len1++;
	}

	len2 = 0;

	while (s2[len2])
	{
		len2++;
	}

	size = len1 + len2;
	p = malloc(sizeof(char) * (size + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;

	while (i <= size)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
