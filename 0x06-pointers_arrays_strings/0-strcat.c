#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * 
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (dest(len) != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest(len) = src(i);
	}
	dest(len) = '\0';

	return (dest);
}
