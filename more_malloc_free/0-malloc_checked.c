#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 *@b: number of elements need meory
 *
 * Return: 98 if not allocated, otherwise 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b * sizeof(char));
	if (mem == NULL)
		exit(98);
	return (mem);
}
