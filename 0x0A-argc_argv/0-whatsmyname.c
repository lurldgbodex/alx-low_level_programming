#include  <stdio.h>

/**
 * main - prints the name of the program followed by a new line
 * @argc: counts the number of arguments passed into command line
 * @argv: arrays that holds the string value of the command entered
 */
int main(int argc, char* argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
