#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - function that frees dogs
  * @d: input pointer to struct
  */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
