#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0\
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	result = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coin[j])
		{
			result++;
			i -= coin[j];
		}
	}
	printf("%d\n", result);

	return (0);
}
