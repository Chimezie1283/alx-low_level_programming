#include "dog.h"
#include <stdlib.h>

 /**
 * init_dog - A function thatinitializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: The name to be initialized
 * @age: The age to be initialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		*d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
