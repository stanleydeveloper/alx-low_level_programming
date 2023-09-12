#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes the variable of type struct dog
 * @d: Pointer to struct dog to be initialized
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
