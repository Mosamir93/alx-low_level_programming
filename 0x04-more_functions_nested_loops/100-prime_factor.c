#include <stdio.h>
#include <math.h>

/**
*main - entry point for control
*
*Return: 0 to indicate success
*/

int main(void)
{
	long long int n = 612852475143;
	long long pn, lp;

	while (n % 2 == 0)
		n = n / 2;
	for (pn = 3; pn <= sqrt(n); pn += 2)
	{
		while (n % pn == 0)
		{
			n = n / pn;
			lp = pn;
		}
	}
	if (n > 2)
		lp = n;
	printf("%lld\n", lp);
	return (0);
}
