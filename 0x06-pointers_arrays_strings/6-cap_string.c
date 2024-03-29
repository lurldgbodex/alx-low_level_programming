#include "main.h"

/**
 * *cap_string - capitalize all worlds aof a string
 * @s: string to modify
 *
 * Return: resulting string
 */
char *cap_string(char *s)
{
	int i, j;

	char spec[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (s[i] == spec[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
		i++;
	}

	return (s);
}
