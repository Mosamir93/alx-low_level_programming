#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: string to measure it's length
 *Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
/**
 *wildcmp - compares two strings
 *@s1: first string to compare
 *@s2: second string to compare
 *Return: 1 if identical 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	int len1, len2;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	len1 = (_strlen_recursion(s1) -1);
	len2 = (_strlen_recursion(s2) -1);

	if (s2[len2] == '*' && len2 == 0)
		return (1);
	if (len1 == 0 && len2 == 0)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
	return (0);
}
