#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
