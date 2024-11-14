#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return NULL;
	}
	if (name != NULL)
	{
		ndog->name = malloc(strlen(name) + 1);
		if (ndog->name == NULL)
		{
			free(ndog);
			return (NULL);
		}
		strcpy(ndog->name, name);
	}
	else
	{
		ndog->name = NULL;
	}
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
