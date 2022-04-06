#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2-dimentional array o integers
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: a pointer to created matrix
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **)malloc(height * sizeof2(int *));

		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] =  (int *)malloc(width * sizeof(int));
			if (p == NULL)
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}

		return (p);
	}
}
