#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocate a space in memory with new size
 * @ptr: previous allocated memory to be change
 * @old_size: size of previous memory location
 * @new_size: size of new allocated space in memory
 *
 *Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_arr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_arr = malloc(new_size);
	if (new_arr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
		{
			new_arr[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (new_arr);
}
