#include "main.h"

/**
*_atoi - converts a string to an integer
*@s: string to be converted
*Return: the converted integer
*/

int _atoi(char *s)
{
	int i, sign = 1, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] = '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
		}
		else
			continue;
	}
	n *= sign;
	return (n);
}
