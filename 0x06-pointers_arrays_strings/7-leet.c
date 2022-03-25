#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
		++i;
	}

	return (s);
}
