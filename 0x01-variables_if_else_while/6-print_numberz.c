#include <stdio.h>
/**
 * main - prints all single numbers of base 10
 * starting from 0 using putchar
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
