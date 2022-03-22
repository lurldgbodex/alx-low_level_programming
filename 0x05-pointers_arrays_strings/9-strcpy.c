#include "main.h"

/**
 * *_strcpy - copy string pointed to by src to the buffer
 * buffer pointer to by dest
 * @src: string to be copied
 * @dest: pointer to the buffer in which to copy the string
 *
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
