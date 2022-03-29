#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area of dest.
 * @dest: pointer ot destination
 * @src: pointer to source string
 * @n: number of bytes to be copied
 *
 * Return: pointer ot dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
