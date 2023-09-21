#include "main.h"

/**
*infinite_add - adds two numbers
*@n1: the first number
*@n2: the second number
*@r: buffer to store result
*@size_r: size of buffer r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, rem = 0, sum = 0;

	for (i = 0; n1[i] != '\0' || n2[i] != '\0'; i++)
	{
		if (i < size_r - 1)
		{
			sum = (rem + (n1[i] - '0') + (n2[i] - '0'));
			if (sum > 9)
			{
				rem = sum % 10;
				sum /= 10;
			}
			else
			{
				rem = 0;
			}
			r[i] = sum + '0';
		}
		else
		{
			return (0);
		}
	}
	if (rem != 0 && i < size_r -1)
	{
		r[i] = rem + '0';
	}
	else if (i >= size_r -1)
	{
		return (0);
	}
	r[i+1] = '\0';
	return (r);
}
