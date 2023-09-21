#include "main.h"

/**
 *leet - encodes a string into 1337
 *@str: string to be encoded
 *Return: str which is string encoded
 */

char *leet(char *str)
{
	int i, j;



	for (i = 0; str[i] != '\0'; i++)
	{
		char n[] = "4307143071";
		char a[] = "aeotlAEOTL";
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j] && str[i - 1] != '\')
				str[i] = n[j];
		}
	}
	return (str);
}
