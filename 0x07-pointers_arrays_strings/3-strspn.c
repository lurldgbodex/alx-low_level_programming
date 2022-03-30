#include "main.h"

/**
 * _stspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match s
 *
 * Return: number of bytes in s contained in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept [j])
			{
				count ++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (count);
}
