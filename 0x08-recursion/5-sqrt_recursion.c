#include "main.h"

/**
 *_sqrt_temp - returns the natural square root of a number
 *@n: number to get its natural square root
 *@temp: the natural square root
 *Return: natural square root or -1 if not available
 */

int _sqrt_temp(int n, int temp)
{
	if (temp * temp == n)
		return (temp);
	if (temp * temp > n)
		return (-1);
	return (_sqrt_temp(n, temp + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to get its natural square root
 *Return: natural square root or -1 if not available
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);
	return (_sqrt_temp(n, 2));
}
