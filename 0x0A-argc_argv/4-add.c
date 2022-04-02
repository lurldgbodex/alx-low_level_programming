#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line string
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] < '0' || argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", result);

	return (0);
}
