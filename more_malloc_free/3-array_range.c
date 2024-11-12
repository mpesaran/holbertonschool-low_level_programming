#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: starting number of array
 * @max: final integer in array
 *
 *Return: null if min>max, 0 otherwise
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;
	int k = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc((len + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[k] = i;
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
