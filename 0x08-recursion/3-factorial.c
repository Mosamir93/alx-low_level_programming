#include "main.h"

/**
*factorial - returns the factorial of a given number
*@n: number to find it's factorial
*Return: returns factorial or -1 if number less than 0
*/

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n > 1)
		return (n *= factorial(n - 1));
	else
	return (-1);
}
