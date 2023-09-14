#include <stdio.h>
#include <math.h>

/**
*main - entry point for control
*
*Return: 0 to indicate success
*/

int main(void)
{
	long int n = 612852475143;
	long int pn, lp;

	while (n % 2 == 0)
		n = n / 2;
	for (pn = 3; pn <= n; pn += 2)
	{
		while (n % pn == 0)
		{
			n = n / pn;
			lp = pn;
		}
	}
	if (n > 2)
		lp = n;
	printf("%ld\n", lp);
	return (0);
}
