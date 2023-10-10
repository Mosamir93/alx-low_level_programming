#include "dog.h"
#include <stdlib.h>

/**
*free_dog - frees dogs
*@d: pointer to the structure object to be freed
*/

void free_dog(dog_t *d)
{
	(d->name) ? free(d->name) : ;
	(d->owner) ? free(d->owner) : ;
	(d) ? free(d) : ;
}
