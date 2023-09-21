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
	int i, j, k, l, temp, rem = 0, sum = 0;

	for (i = 0; n1[i] != '\0'; i++)

	for (j = 0; n2[j] != '\0'; j++)

	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)
			break;
		sum = sum % 10;
		rem = sum / 10;
		r[k] = sum + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || rem)
		return (0);

	for (k -= 1, l = 0; l < k; l++, k--)
	{
		temp = r[k];
		r[k] = r[l];
		r[l] = temp;
	}
	return (r);
}
