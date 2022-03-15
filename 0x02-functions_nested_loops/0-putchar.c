#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char text[8] = "_putchar";
	int n;
	for (n = 0; n < 8; n++)
	{
		_putchar(text[n]);
	}
	_putchar('\n');

	return (0);
}
