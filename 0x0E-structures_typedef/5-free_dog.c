#include "dog.h"
#include <stdlib.h>

/**
*free_dog - frees dogs
*@d: pointer to the structure object to be freed
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
