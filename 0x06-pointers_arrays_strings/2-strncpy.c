#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: pointer of string to copy to
 * @src: pointer of string to copy from
 * @n: numbe of bytes to copy
 *
 * Return: pointer ot dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
