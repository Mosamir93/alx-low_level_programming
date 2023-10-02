#include "main.h"

/**
 *_islower - a function that checks for lowercase characte
 *@c: tested character from input
 *Return: 1 if c is lower case and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
