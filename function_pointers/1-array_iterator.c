#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates given array
 * @array: array to be iterated
 * @size: size of the given array
 * @action: function to be executed on array elements
 *
 * Return : Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
