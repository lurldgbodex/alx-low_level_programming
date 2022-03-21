#include "main.h"

/**
 * reset_to_98 - taskes a pointer to an int as parameter and
 * updates the value it points to 98
 * @n: integer
 */
void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
