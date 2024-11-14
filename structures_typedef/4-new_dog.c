#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - creates a new dog type dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 *
 * Return: always -
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int name_len = 0, owner_len = 0, i;

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc((name_len + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc((owner_len + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		ndog->name[i] = name[i];
	for (i = 0; i < owner_len; i++)
		ndog->owner[i] = owner[i];
	ndog->age = age;
	return (ndog);
}
