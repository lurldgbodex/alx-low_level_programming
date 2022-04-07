#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value to allocate memory for
 *
 * Return: pointer ot allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(*p) * b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	else
		return (p);
}
