#include "main.h"

/**
*_pow_recursion - returns the value of x raised to the power of y
*@x: number to find it's power value
*@y: the power of the number
*Return: -1 if power is negative else the calculated number
*/

int _pow_recursion(int x, int y)
{
	int temp;

	temp = x;
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
	{
		_pow_recursion(x, y - 1);
		x = x * temp;
		return (x);
	}
	return (-1);
}
