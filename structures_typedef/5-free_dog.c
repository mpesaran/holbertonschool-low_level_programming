#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees all the allocated memory
 * @d: dog type dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(s->name);
		free(d->owner);
		free(d);
	}
}
