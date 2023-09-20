#include "main.h"

/**
*string_toupper - hanges all lowercase letters of a string to uppercase
*@str: string to be changed
*Return: str the changed string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] -= 32;
	}
	return (str);
}
