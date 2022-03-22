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
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
