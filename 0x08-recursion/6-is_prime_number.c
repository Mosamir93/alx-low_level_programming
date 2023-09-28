#include "main.h"

/**
*primecheck - checks if number is prime or not
*@n: number to be checked
*@check: number to divide by to check
*Return: 1 if prime 0 if not
*/

int primecheck(int n, int check)
{
	if (check > 1 && n % check == 0)
		return (0);
	if (check == 1)
		return (1);
	return (primecheck(n, check - 1));
}

/**
*is_prime_number - checks if number is prime or not
*@n: number to be checked
*Return: 1 or 0 depending on prime or not
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (primecheck(n, n - 1));
}
