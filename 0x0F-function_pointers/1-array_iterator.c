#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function as a parameter
 * @array: array to  iterate
 * @size: size of the arry
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
