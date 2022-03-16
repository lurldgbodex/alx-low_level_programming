#include "main.h"
/**
 * times_table - prints the 9 times tables starting from 0
 */
void times_table(void)
{
	int j, k, l;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			l = k * j;
			if (k == 0)
			{
				_putchar(l = '0');
			}
			if (l < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			}
			else if (l >=10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
