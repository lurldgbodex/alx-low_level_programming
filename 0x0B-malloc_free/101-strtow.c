#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into two
 * @str: pointer to string
 *
 * Return: pointer to te array of string
 * NULL if str = NULL or str = ""
 */
char **strtow(char *str)
{
	char **result;
	int len, i;
	char delimeter[] = " ";

	if (str == NULL || *str == *delimeter)
	{
		return (NULL);
	}
	len = 0;

	while (str[len])
		len++;
	result = malloc(sizeof(char *) * (len + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] == *delimeter || str[i] == '\0')
		{
			result[i] = '\0';
		}
		else
		{
			*(result[i]) = str[i];
		}
	}
	result[i] = '\0';

	return (result);
}
