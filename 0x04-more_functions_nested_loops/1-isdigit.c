#include "main.h"

/**
*_isdigit - checks for digits
*
*@c: character to be checked
*Return: 1 if between 0 and 9  0 if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
