#include "main.h"

/**
 * *_strpbrk - searches a string or any of a set bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to s that matches or null if ther isn't
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];

				return (p);
			}
		}
	}

	return (p);
}
