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
	unsigned int len1, len2, i, j;

	len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);

	for (i = 0; i < len1 i++)
		p[i] = s1[i];
	j = 0;

	while (n < len2 && i < (len1 + n))
		p[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
