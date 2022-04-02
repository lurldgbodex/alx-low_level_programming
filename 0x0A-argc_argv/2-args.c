#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all argumesnt it receives
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
