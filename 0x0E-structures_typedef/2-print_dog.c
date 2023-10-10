#include "dog.h"
#include <stdio.h>

/**
*print_dog - prints a struct dog
*@d: pointer to structure
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("(nil)\n");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
