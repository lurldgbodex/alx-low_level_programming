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

	for (n = 48; n <= 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
