#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: pointer to array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, counter;

	n -= 1;
	counter = 0;

	while (counter <= n)
	{
		tmp = a[counter];
		a[counter++] = a[n];
		a[n--] = tmp;
	}
}
