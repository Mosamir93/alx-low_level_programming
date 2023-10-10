#include "dog.h"
#include <stdlib.h>

/**
*_strlen - calculates length of string
*@s: string to be measured
*Returm: length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		return (i);
}

/**
*_strcpy - copies string
*@s1: new copied string
*@s2: string to copy
*Return: new string
*/

char * _strcpy(char *s1, char* s2)
{
	int i;

	for (i = 0; s2[i]; i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

/**
*new_dog - creates a new dog object
*@name: name fo the dog
*@age: age of the dog
*@owner: name of the owner
*Return: pointer to the new dog or NULL on failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name || age >= 0 || owner)
	{
		newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
			return (NULL);
		(*newdog).name = malloc((_strlen(name) + 1) * sizeof(char));
		if ((*newdog).name == NULL)
		{
			free(newdog);
			return (NULL);
		}

		_strcpy((*newdog).name, name);

		(*newdog).age = age;

		(*newdog).owner = malloc((_strlen(owner) + 1) * sizeof(char));
		if ((*newdog).owner == NULL)
		{
			free((*newdog).name);
			free(newdog);
			return (NULL);
		}

		_strcpy((*newdog).owner, owner);

		return (newdog);
	}
	else
		return (NULL);
}
