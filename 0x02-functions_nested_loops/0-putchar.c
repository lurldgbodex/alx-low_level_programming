#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char c[8] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');

	return (0);
}
