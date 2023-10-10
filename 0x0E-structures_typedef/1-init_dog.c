#include "dog.h"
#include <stddef.h>

/**
*init_dog - initialize a variable of type struct dog
*@d: pointer to structure
*@name: name of dog string
*@age: age of dog as a float
*@owner: string with owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
