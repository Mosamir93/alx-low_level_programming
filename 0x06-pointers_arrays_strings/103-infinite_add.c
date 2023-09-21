#include "main.h"

/**
 *infinite_add - adds two numbers
 *@n1: the first number
 *@n2: the second number
 *@r: buffer to store result
 *@size_r: size of buffer r
 *Return: r or 0 if r bigger than size of r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, rem = 0, sum = 0;

	for (i = 0; n1[i] != '\0'; i++)

	for (j = 0; n2[j] != '\0'; j++)

	for (i -= 1, j -= 1; i != 0 || j != 0; i--, j--)
	{
		if (i < size_r - 1 && j < size_r)
		{
			if (i >= 0)
				sum += (n1[i] - '0');
			if (j >= 0)
				sum += (n2[j] - '0');
			sum += rem;
			if (sum > 9)
			{
				sum = sum % 10;
				rem = sum / 10;
			}
			else
				rem = 0;
			if (i >= j)
				k = i;
			else
				k = j;
			r[k] = sum + '0';
		}
		else
			return (0);
	}
	if (rem != 0)
		r[k] = rem + '0';
	else if (k >= size_r - 1)
		return (0);
	r[k + 1] = '\0';
	return (r);
}
