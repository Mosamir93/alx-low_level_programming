#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@i: integer to be computed
 *Return: 0 to indicate success
 */

int _abs(int i)
{
	if (i < 0)
		i = i * (-1);
	else
		i = i * (1);
	return (0);
}
