#include "main.h"
#include <stdlib.h>

/**
 * *create_array - initialize an array of size with a specific character
 * @size:size of array
 * @c: array will fill with this character
 *
 * Return: if size is 0, null, otherwise an array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	arr[size] = '\0';
	return (arr);
}
