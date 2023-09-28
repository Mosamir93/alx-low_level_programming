#include "main.h"

/**
*_strlen_recursion - returns the length of a string
*@s: string to measure it's length
*Return: len which is the length of string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s[len += 1]);
	}
	return (len);
}
