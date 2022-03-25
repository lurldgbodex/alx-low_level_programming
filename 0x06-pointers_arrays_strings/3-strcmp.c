#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: The differences between the s1 and s22
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
