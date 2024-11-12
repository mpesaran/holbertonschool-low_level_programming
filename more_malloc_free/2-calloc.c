#include "main.h"
#include <stdlib.h>
/**
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc((nmemb + 1) * size);
	for (i = 0; i <= nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
