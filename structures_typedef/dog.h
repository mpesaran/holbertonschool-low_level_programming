#ifndef DOG_H
#define DOG_H
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - creates a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
