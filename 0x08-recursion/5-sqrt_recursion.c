#include "main.h"

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: number to get its natural square root
*Return: natural square root or -1 if not available
*/

int _sqrt_recursion(int n)
{
	int temp;

	temp = n;
	if (n == 1 || n == -1 || n == 0)
		return (n);
	else if (n > 1)
	{
		temp -= 1;
		if (temp * temp == n && temp > 1)
			return (temp);
		temp = (_sqrt_recursion(n));
	}
	return (-1);
}
