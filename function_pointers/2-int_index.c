#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be processed
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of integer found first
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
