#include "main.h"

/**
*wildcmp - compares two strings
*@s1: first string to compare
*@s2: second string to compare
*Retirn: 1 if identical 0 if not
*/

int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	return (0);
}
