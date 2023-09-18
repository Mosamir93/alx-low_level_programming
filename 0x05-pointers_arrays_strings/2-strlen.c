#include "main.h"

/**
 *_strlen - calculates length of string
 *@s: string to be calculated
 *Return: len the length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; *s++)
		len += 1;

	return (len);
}
