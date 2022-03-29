#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for 
 *
 * Return: pointer to irst character c in s or null
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	if (s[i] == c)
	{
		p = &s[i];
	}
	return (p);
}
