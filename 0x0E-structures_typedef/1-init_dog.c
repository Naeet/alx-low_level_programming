#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init a dog
 * @d: struct
 * @name: name
 * @age: age of dog
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
