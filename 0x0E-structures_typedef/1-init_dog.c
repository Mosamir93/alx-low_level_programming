#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
*struct dog - structure of dog name age and owner
*@name: name of dog
*@age: age of dog
*@owner: owner of the dog
*
*Description: structure of dog's info
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

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
		d -> age = age;
		d -> owner = owner;
	}
}
