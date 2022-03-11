#include <stdio.h>

/**
 * main - prints the sizes of the various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int %lu byte(s)\n", sizeof(i));
	printf("size of a long int %lu byte(s)\n", sizeof(li));
	printf("size of a long long int %lu byte(s)\n", sizeof(lli));
	printf("size of a float %lu byte(s)\n", sizeof(f));

	return (0);
}
