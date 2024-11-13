#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog details
 * @d: the dog structure
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: %s\n", "(nil)");
	if((*d).owner == NULL)
		printf("Owner: %s\n", "(nill)");
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
