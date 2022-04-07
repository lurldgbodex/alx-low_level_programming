#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the newly allocated space in memeory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	size = len1 + n;

	p = malloc(sizeof(char) * (size) + 1);
	if (p == NULL)
	{	
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < size; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
