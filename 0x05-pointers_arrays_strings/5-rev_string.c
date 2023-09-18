#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *
 */

void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[(len - 1) - i];
		s[(len - 1) - i] = temp;
	}
}
