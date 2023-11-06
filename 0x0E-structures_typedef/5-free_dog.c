#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free doga
 * @d: ptr to struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
